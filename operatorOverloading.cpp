/*
Inside any custom class, the use of operators can be overloaded to get suitable results.
For example, let us say I have created a fraction class.

In order to overload the + binary operator to be used for fraction type objects, I can write the following code :
*/

Fraction operator+(Fraction const &f2)
{
  int n = numerator * f2.denominator + f2.numerator * denominator ;
  int d = denominator * f2.denominator ;
  
  
  Fraction fnew(n, d);
  fnew.simplify();
  
  return fnew;
  
}

//This would allow us to write 
//Fraction f3 = f1 + f2 ; 

/*
If we need to use a unary operator like ++ for pre-increment , we need to ensure that changes are reflected in the original Fraction
object as well. For that, we need to return by reference and NOT by value.

In case of pre-increment, we may require nesting i.e. ++(++f2) ;
In order to return by reference, we ONLY need to add "&" after the return type of the function.
*/

// WORKS FOR PRE-INCREMENT
Fraction& operator++()
{
  numerator = numerator + denominator ;
  simplify();
  
  return (*this) ;
}

// WORKS FOR POST-INCREMENT
// In case of post increment, generally we do not require nesting the operator and thus return by value works.
Fraction operator++(int)
{
  Fraction fnew(numerator, denominator);
  
  numerator = numerator + denominator ;
  simplify();
  fnew.simplify();
  
  return fnew;
}
