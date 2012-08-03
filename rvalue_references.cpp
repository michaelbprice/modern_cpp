//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

#include "move_semantics.h"

MoveableBuffer rval_helper ()
{
    MoveableBuffer this_can_move; return this_can_move;
}

void rval_func ()
{
    // Default Construction
    MoveableBuffer some_object;

    // Copy Construction (always)
    MoveableBuffer another_object = some_object;

    // Move Assignment (if available, else Copy Assignment)
    another_object = rval_helper();

    // Reference Capturing
    MoveableBuffer & normal_ref_1 = some_object;
    //MoveableBuffer && rval_ref_1 = some_object; // Error!

    const MoveableBuffer & normal_ref_2 = rval_helper();
    MoveableBuffer && rval_ref_2 = rval_helper();
}