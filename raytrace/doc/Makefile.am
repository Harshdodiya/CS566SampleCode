#
# Copyright (c) 2005-2013 Michael Shafae
# All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met: 
# 
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
# IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
# TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
# PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
#
# $Id: Makefile.am 4393 2013-09-08 01:52:41Z mshafae $
#
#
docfiles = grammar.tex

if HAVE_PDFLATEX
doc_DATA = grammar.pdf
docfiles += grammar.pdf
MANNAME = grammar
MANTEXSRC = $(MANNAME).tex
MANAUX = $(MANNAME).aux
MANPDF = $(MANNAME).pdf

CLEANFILES = $(MANPDF) $(MANNAME).log $(MANNAME).idx $(MANNAME).out $(MANNAME).toc $(MANAUX)

$(MANPDF):	$(srcdir)/$(MANTEXSRC)
	$(PDFLATEX) $< && $(PDFLATEX) $<
endif

dist_doc_DATA = $(docfiles)
