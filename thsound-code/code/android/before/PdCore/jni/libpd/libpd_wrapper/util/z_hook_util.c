/***
 * Excerpted from "Programming Sound with Pure Data",
 * published by The Pragmatic Bookshelf.
 * Copyrights apply to this code. It may not be used to create training material, 
 * courses, books, articles, and the like. Contact us if you are in doubt.
 * We make no guarantees that this code is fit for any purpose. 
 * Visit http://www.pragmaticprogrammer.com/titles/thsound for more book information.
***/
/*
 * Copyright (c) 2012 Tebjan Halm (tebjan@vvvv.org)
 *
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/libpd/libpd/wiki for documentation
 *
 */

#include "z_hook_util.h"

// returns true if and only if an actual init was performed
int libpd_safe_init() { 
  static int initialized = 0;
  if (initialized) return 0;
  initialized = 1;
  libpd_init();
  return 1;
}

/* set hooks */

void libpd_set_printhook(const t_libpd_printhook hook){
	libpd_printhook = hook;
}

void libpd_set_banghook(const t_libpd_banghook hook){
	libpd_banghook = hook;
}

void libpd_set_floathook(const t_libpd_floathook hook){
	libpd_floathook = hook;
}

void libpd_set_symbolhook(const t_libpd_symbolhook hook){
	libpd_symbolhook = hook;
}

void libpd_set_listhook(const t_libpd_listhook hook){
	libpd_listhook = hook;
}

void libpd_set_messagehook(const t_libpd_messagehook hook){
	libpd_messagehook = hook;
}

int libpd_atom_is_float(t_atom *a) {
  return libpd_is_float(*a);
}

int libpd_atom_is_symbol(t_atom *a) {
  return libpd_is_symbol(*a);
}

float libpd_atom_get_float(t_atom *a) {
  return libpd_get_float(*a);
}

char *libpd_atom_get_symbol(t_atom *a) {
  return libpd_get_symbol(*a);
}

t_atom *libpd_next_atom(t_atom *a) {
  return a + 1;
}
