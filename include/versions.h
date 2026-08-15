#pragma once

#define EUR 0
#define JP 1
#define USA 2
#define EUR1 3

#ifndef VERSION
    #warning "VERSION is not defined, check configure.py!"
    #define VERSION EUR
#endif

#define IS_EUR (VERSION == EUR)
#define IS_EUR1 (VERSION == EUR1)
#define IS_JP (VERSION == JP)
#define IS_USA (VERSION == USA)
