/*
   Andrew Bizyaev (ANB) github.com/andrewbiz
*/
#ifndef MVC_PROTO_H
#define MVC_PROTO_H

#include <Arduino.h>
#include <inttypes.h>
#include <Logging.h>

#define LOGLEVEL LOG_LEVEL_DEBUG // see Logging.h for options
#define LOG_PRINT_TS true  // print time stamp in logging
#define LOG_AUTO_LN  true  // print auto LN (CR) after each call

#define ARRAY_COUNT(a) (sizeof(a)/(sizeof(a[0])))

#endif
