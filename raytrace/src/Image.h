/* Your Name Here
 * somebody at something dot TLD
 * CS 566
 * September 20XX
 *
 */
/*
 * Copyright (c) 2005-2013 Michael Shafae
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met: 
 * 
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 * $Id: Image.h 4419 2013-09-12 04:16:46Z mshafae $
 *
 */

/*
 * The image class defines a trivial encoding for images known as PPM
 * format; it simply consists of an array or RGB triples, with one byte
 * per component, preceeded by a simple header giving the size of the
 * image.
 */

#include <cstdio>
#include <iostream>

#ifndef _IMAGE_H_
#define _IMAGE_H_


typedef unsigned char channel;  

class Pixel {
public:
  Pixel( ) { r = 0; g = 0; b = 0; };
  Pixel( channel _r, channel _g, channel _b ) { r = _r; g = _g; b = _b; };
  void write( std::ostream &out ) const{
    out << "[" << r << ", " << g << ", " << b <<", " << "]";
  };
  channel r;
  channel g;
  channel b;
};

std::ostream& operator <<( std::ostream &out, const Pixel &p );

class Image {
public:
  Image( int x_res, int y_res );
  ~Image( ) { delete[] pixels; }
  unsigned char* read( const char *file_name );
  bool write( const char *file_name );
  Pixel &operator()( int i, int j );
  Pixel *pixels;
  int    width;
  int    height;
};


#endif
