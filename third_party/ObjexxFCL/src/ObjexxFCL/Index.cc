// Index: Index Class
//
// Project: Objexx Fortran Compatibility Library (ObjexxFCL)
//
// Version: 4.0.0
//
// Language: C++
//
// Copyright (c) 2000-2014 Objexx Engineering, Inc. All Rights Reserved.
// Use of this source code or any derivative of it is restricted by license.
// Licensing is available from Objexx Engineering, Inc.:  http://objexx.com

// ObjexxFCL Headers
#include <ObjexxFCL/Index.hh>

// C++ Headers
#include <iostream>

namespace ObjexxFCL {

	// Stream Input
	std::istream &
	operator >>( std::istream & stream, Index & a )
	{
		int i;
		stream >> i;
		a.i( i );
		return stream;
	}

	// Stream Output
	std::ostream &
	operator <<( std::ostream & stream, Index const & a )
	{
		if ( a.initialized() ) {
			stream << "[" << a.i() << "]";
		} else {
			stream << "[]";
		}
		return stream;
	}

} // ObjexxFCL
