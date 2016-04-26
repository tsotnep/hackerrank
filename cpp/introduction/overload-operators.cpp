//https://www.hackerrank.com/challenges/overload-operators

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator + (Complex x, Complex y) {
    int sumA=x.a + y.a;
    int sumB=x.b + y.b;
    Complex ans;
    string s=to_string(sumA)+'+'+'i'+to_string(sumB);
    ans.input(s);
    return ans;
}

ostream& operator<< (ostream& output, Complex x)
{
    output << to_string(x.a)+'+'+'i'+to_string(x.b) << endl;
 return output;
}
