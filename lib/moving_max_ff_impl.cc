/* -*- c++ -*- */
/* 
 * Copyright 2019 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include "moving_max_ff_impl.h"

namespace gr {
  namespace kicksat2 {

    moving_max_ff::sptr
    moving_max_ff::make(int window_size)
    {
      return gnuradio::get_initial_sptr
        (new moving_max_ff_impl(window_size));
    }

    /*
     * The private constructor
     */
    moving_max_ff_impl::moving_max_ff_impl(int window_size)
      : gr::sync_block("moving_max_ff",
              gr::io_signature::make(1, 1, sizeof(float)),
              gr::io_signature::make(1, 1, sizeof(float)))
    {
      set_history(window_size);
      m_window_size = window_size;
    }

    /*
     * Our virtual destructor.
     */
    moving_max_ff_impl::~moving_max_ff_impl()
    {
    }

    int
    moving_max_ff_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
      const float *in = (const float *) input_items[0];
      float *out = (float *) output_items[0];

      for(int k = 0; k < noutput_items; ++k)
        {
          float current_max = -1.0e8;

          for(int j = k; j < (m_window_size+k); ++j)
          {
            if(in[j] > current_max)
            {
              current_max = in[j];
            }
          }
          out[k] = current_max;
        }

      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace kicksat2 */
} /* namespace gr */

