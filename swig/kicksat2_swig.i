/* -*- c++ -*- */

#define KICKSAT2_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "kicksat2_swig_doc.i"

%{
#include "kicksat2/moving_max_ff.h"
%}


%include "kicksat2/moving_max_ff.h"
GR_SWIG_BLOCK_MAGIC2(kicksat2, moving_max_ff);
