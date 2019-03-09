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

#ifndef INCLUDED_KICKSAT2_MOVING_MAX_FF_IMPL_H
#define INCLUDED_KICKSAT2_MOVING_MAX_FF_IMPL_H

#include <kicksat2/moving_max_ff.h>

namespace gr {
  namespace kicksat2 {

    class moving_max_ff_impl : public moving_max_ff
    {
     private:
      int m_window_size;

     public:
      moving_max_ff_impl(int window_size);
      ~moving_max_ff_impl();

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
    };

  } // namespace kicksat2
} // namespace gr

#endif /* INCLUDED_KICKSAT2_MOVING_MAX_FF_IMPL_H */

