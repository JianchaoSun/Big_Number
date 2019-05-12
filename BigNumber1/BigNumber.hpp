//
//  BigNumber.hpp
//  BigNumber1
//
//  Created by Jianchao Sun on 5/12/19.
//  Copyright © 2019 Jianchao Sun. All rights reserved.
//

#ifndef BigNumber_hpp
#define BigNumber_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

#endif /* BigNumber_hpp */

class BigNumber{
public:
    bool pos;
    std::vector<int> v;
    
    BigNumber();
    
    BigNumber(std::string s);
    
    BigNumber add( BigNumber n, BigNumber n2);
    BigNumber sub(BigNumber n1, BigNumber n2);
    BigNumber operator -( BigNumber n);
    BigNumber  operator *( BigNumber n);
    BigNumber operator /( BigNumber n);
    BigNumber operator %( BigNumber n);
    BigNumber operator +( BigNumber n);
    BigNumber mul(BigNumber n1, BigNumber n2);
    BigNumber mod(BigNumber d1, BigNumber d2);
    BigNumber div(BigNumber d1, BigNumber d2);
    void removeLeadingZeros();
    bool isLarger(BigNumber n1,BigNumber nu);
    bool isLess(BigNumber n1,BigNumber nu);
    
};
