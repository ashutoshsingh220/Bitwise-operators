//Basic use of bitwise operstors.
#include<iostream>
using namespace std;
int main()

{
    int a,b;
    int and_op,or_op,EXOR_op,NOT,left_shift,right_shift;

    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    and_op = a&b;
    cout<<"AND operator: "<<and_op<<endl;

    or_op = a|b;
    cout<<"OR operator: "<<or_op<<endl;

    EXOR_op = a^b;
    cout<<"EXOR_op operator: "<<EXOR_op<<endl;

    NOT = ~a;
    cout<<"NOT operator"<<NOT<<endl;

    left_shift = a<<2;
    cout<<"left shift: "<<left_shift<<endl;

    right_shift = a>>2;
    cout<<"right shift: "<<right_shift<<endl;
}

/*Enter value of a: 5
Enter value of b: 3
AND operator: 1
OR operator: 7
EXOR_op operator: 6
NOT operator-6
left shift: 20
right shift: 1

Enter value of a: 7
Enter value of b: 4
AND operator: 4
OR operator: 7
EXOR_op operator: 3
NOT operator-8
left shift: 28
right shift: 1*/