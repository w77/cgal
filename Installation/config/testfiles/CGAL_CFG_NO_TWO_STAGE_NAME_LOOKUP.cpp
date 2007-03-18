// Copyright (c) 2004  Utrecht University (The Netherlands),
// ETH Zurich (Switzerland), Freie Universitaet Berlin (Germany),
// INRIA Sophia-Antipolis (France), Martin-Luther-University Halle-Wittenberg
// (Germany), Max-Planck-Institute Saarbruecken (Germany), RISC Linz (Austria),
// and Tel-Aviv University (Israel).  All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; version 2.1 of the License.
// See the file LICENSE.LGPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
// 
//
// Author(s)     : Sylvain Pion

// CGAL_CFG_NO_TWO_STAGE_NAME_LOOKUP.cpp
// ---------------------------------------------------------------------
// A short test program to evaluate a C++ compiler.
// This program is used by cgal_configure.
// The following documentation will be pasted in the generated configfile.
// ---------------------------------------------------------------------

//| The flag CGAL_CFG_NO_TWO_STAGE_NAME_LOOKUP is set,
//| if a compiler does not support the two stage name lookup.
//| This is a bug of G++ < 3.4 for example.
//| Note that the program fails when the feature works,
//| which is different from the other test programs.

namespace A {

template < typename T >
int g(const T&)
{ return 0; }

template < typename T >
void f(const T&t)
{ (int) A::g(t); }

void g(int)
{}

} // namespace A

int main()
{
  A::f(2);
  return 0;
}
