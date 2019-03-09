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


#ifndef INCLUDED_KICKSAT2_MOVING_MAX_FF_H
#define INCLUDED_KICKSAT2_MOVING_MAX_FF_H

#include <kicksat2/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace kicksat2 {

    /*!
     * \brief <+description of block+>
     * \ingroup kicksat2
     *
     */
    class KICKSAT2_API moving_max_ff : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<moving_max_ff> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of kicksat2::moving_max_ff.
       *
       * To avoid accidental use of raw pointers, kicksat2::moving_max_ff's
       * constructor is in a private implementation
       * class. kicksat2::moving_max_ff::make is the public interface for
       * creating new instances.
       */
      static sptr make(int window_size);
    };

  } // namespace kicksat2
} // namespace gr

#endif /* INCLUDED_KICKSAT2_MOVING_MAX_FF_H */

