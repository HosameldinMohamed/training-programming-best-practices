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

TEST(Division, division_check_largerthan30_001)
{
    Division div;
    EXPECT_EQ(0.5, div.invoke(1,2));
    //ASSERT_EQ(0.5, div.invoke(1,2));
}

TEST(Division, division_check_negative_001)
{
	Division div;
	EXPECT_NE(3, div.invoke(6, 3));
}

TEST(Division, exception_thrown_001)
{
	Division div;
	EXPECT_THROW(div.invoke(-30, 2), std::invalid_argument);
}

TEST(Division, exception_thrown_002)
{
	Division div;
	EXPECT_THROW(div.invoke(5, 0), std::invalid_argument);
}
