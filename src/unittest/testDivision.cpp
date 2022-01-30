/******************************************************************************
 *                                                                            *
 * Copyright (C) 2021 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

/**
 * @luca.triceri@iit.it
 */

#include <tuple>

#include "Division.h"
#include "gtest/gtest.h"
// Simple UT

TEST(Division, division_check_positive_001)
{
    Division div;
    EXPECT_EQ(0.5, div.invoke(1, 2));
}

TEST(Division, division_exception_thrown_001)
{
    Division div;
    EXPECT_THROW(div.invoke(10, 0), std::invalid_argument);
}

TEST(Division, division_exception_thrown_002)
{
    Division div;
    EXPECT_THROW(div.invoke(-31, 4), std::invalid_argument);
}