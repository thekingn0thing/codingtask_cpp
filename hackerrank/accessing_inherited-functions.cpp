#include<iostream>

using namespace std;

class A
{
public:
    A(){
        callA = 0;
    }
private:
    int callA;
    void inc(){
        callA++;
    }

protected:
    void func(int & a)
    {
        a = a * 2;
        inc();
    }
public:
    int getA(){
        return callA;
    }
};

class B
{
public:
    B(){
        callB = 0;
    }
private:
    int callB;
    void inc(){
        callB++;
    }
protected:
    void func(int & a)
    {
        a = a * 3;
        inc();
    }
public:
    int getB(){
        return callB;
    }
};

class C
{
public:
    C(){
        callC = 0;
    }
private:
    int callC;
    void inc(){
        callC++;
    }
protected:
    void func(int & a)
    {
        a = a * 5;
        inc();
    }
public:
    int getC(){
        return callC;
    }
};
class D: public A, public B, public C
{
    
    int val;
public:
    //Initially val is 1
    D()
    {
        val = 1;
    }
    
    
    //Implement this function
    void update_val(int new_val)
    {
        int value = new_val;
        
        while (value != 1){
            if (value % 5 == 0) {
                C::func(val);
                value /= 5;
            }else if (value % 3 == 0){
                B::func(val);
                value /= 3;
            }else if (value % 2 == 0){
                A::func(val);
                value /= 2;
            }
        }
    
    }
    //For Checking Purpose
    void check(int val) {
        update_val(val);
        cout << "A calls: " << A::getA() << "\n";
        cout << "B calls: " << B::getB() << "\n";
        cout << "C calls: " << C::getC() << "\n";
    }
    //Do not delete this line.
};