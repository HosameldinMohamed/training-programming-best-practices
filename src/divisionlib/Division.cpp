/******************************************************************************
 *                                                                            *
 * Copyright (C) 2022 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

/**
 * @luca.triceri@iit.it
 */

#include "Division.h"
#include <stdexcept>

double Division::invoke(double left, double right) const
{
    if(left<=-30 || right == 0)
    {
        throw std::invalid_argument("Wrong left argument");
    }
	return internalInvoke(left,right);
}

double Division::internalInvoke(double left, double right) const
{
	return left/right;
}
