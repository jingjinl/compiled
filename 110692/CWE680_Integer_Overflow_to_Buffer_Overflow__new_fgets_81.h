/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_81.h
Label Definition File: CWE680_Integer_Overflow_to_Buffer_Overflow__new.label.xml
Template File: sources-sink-81.tmpl.h
*/
/*
 * @description
 * CWE: 680 Integer Overflow to Buffer Overflow
 * BadSource: fgets Read data from the console using fgets()
 * GoodSource: Small number greater than zero that will not cause an integer overflow in the sink
 * Sinks:
 *    BadSink : Attempt to allocate array using length value from source
 * Flow Variant: 81 Data flow: data passed in a parameter to a virtual method called via a reference
 *
 * */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int printIntLine(int);
int printLine(const char*);

namespace CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_81
{

class CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_81_base
{
public:
    /* pure virtual function */
    virtual void action(int data) const = 0;
};

#ifndef OMITBAD

class CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_81_bad : public CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_81_base
{
public:
    void action(int data) const;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_81_goodG2B : public CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_81_base
{
public:
    void action(int data) const;
};

#endif /* OMITGOOD */

}
