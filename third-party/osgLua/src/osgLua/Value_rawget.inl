/*
	osgLua: use Lua to access dynamically to osg using osgIntrospection
	Copyright(C) 2006 Jose L. Hidalgo Valiño (PpluX) (pplux at pplux.com)
	Copyright(C) 2010-2011 Iowa State University (Author: Ryan Pavlik <rpavlik@acm.org> )

    This library is open source and may be redistributed and/or modified under
    the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or
    (at your option) any later version.  The full license is in LICENSE file
    included with this distribution, and on the openscenegraph.org website.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    OpenSceneGraph Public License for more details.
*/

#ifndef OSGLUA_VALUE_RAWGET
#define OSGLUA_VALUE_RAWGET

#include <osgLua/Value>
#include <osgLua/LuaInclude>

namespace osgLua {

	inline Value* Value::_rawGet(lua_State *L, int index) {
		Value **value = reinterpret_cast<Value**>(lua_touserdata(L, index));
		if (value) {
			return *value;
		}
		return 0;
	}

} // end of osgLua namespace

#endif
