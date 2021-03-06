//
// Copyright (c) 2015-2016 CNRS
//
// This file is part of Pinocchio
// Pinocchio is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
//
// Pinocchio is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Lesser Public License for more details. You should have
// received a copy of the GNU Lesser General Public License along with
// Pinocchio If not, see
// <http://www.gnu.org/licenses/>.

#include "pinocchio/bindings/python/fwd.hpp"
#include "pinocchio/bindings/python/spatial/inertia.hpp"
#include "pinocchio/bindings/python/utils/std-aligned-vector.hpp"

namespace se3
{
  namespace python
  {
    
    void exposeInertia()
    {
      InertiaPythonVisitor<Inertia>::expose();
      StdAlignedVectorPythonVisitor<Inertia>::expose("StdVec_Inertia");
    }
    
  } // namespace python
} // namespace se3
