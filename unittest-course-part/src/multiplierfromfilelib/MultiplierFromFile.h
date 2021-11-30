
/******************************************************************************
 *                                                                            *
 * Copyright (C) 2021 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

/**
 * @luca.triceri@iit.it
 */

#pragma once

#include <string>

class MultiplierFromFile
{
   public:
	explicit MultiplierFromFile(const std::string &name) : name_(name){};
	double invoke(unsigned int leftIndex, unsigned int rightIndex) const;

   private:
	virtual double getDataFromFile(unsigned int index) const;
	virtual double getDataFromFile(unsigned int index,unsigned int command) const;
	const std::string name_;
};