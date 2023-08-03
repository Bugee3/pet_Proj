//#include <iostream>
//#include <iomanip>
//
//
//int main(){
//    int number1 = 15;
//    int number2 = 017;
//    int number3 = 0x0f;
//    int number4 = 0b00001111;
//
//    std:: cout << "Numbers :" <<std::endl;
//    std:: cout << "number 1 :" << number1 <<std::endl; // decimal
//    std:: cout << "number 2 :" << number2 <<std::endl; // Octal
//    std:: cout << "number 3 :" << number3 <<std::endl; // Hexadecimal
//    std:: cout << "number 4 :" << number4 <<std::endl; //binary C++ 14;
//
//    int numeral = 2.6;
//    std:: cout << numeral <<std::endl;
//
//    std:: cout << sizeof(number1) << " : size of number 1" <<std::endl;
//    std:: cout << sizeof(number2) << " : size of number 2" <<std::endl;
//
//    float float_number {23.4};
//    std:: cout << sizeof(float_number) <<std::endl;
//
//    int sum_number1_and_number2 = (number1 + number2);
//    std:: cout << "sum of number 1 and number 2: " << sum_number1_and_number2<<std::endl;
//
//    std:: cout << "bellow are short type modifires:" <<std::endl;
//    std:: cout << "=============================================" <<std::endl;
//    std:: cout <<std::endl;
//
//    short short_var {-32738};
//    short int short_int {455};
//    signed short signed_short {122};
//    signed short int signed_short_int {-456};
//    unsigned short int unsigned_short_int {456};
//
//    std:: cout << short_var <<std::endl;
//    std:: cout << short_int <<std::endl;
//    std:: cout << signed_short <<std::endl;
//    std:: cout << signed_short_int <<std::endl;
//    std:: cout << unsigned_short_int <<std::endl;
//
//    std:: cout << "=============================================" <<std::endl;
//    std:: cout <<std::endl;
//    //Fractional numbers: we can control to view precision of fractional numbers in std
//
//    long double long_double {1.2352534322L};
//    double double_number {3.4324343424234};
//    float new_float {3.23344324f};
//
//    std:: cout <<std::setprecision(20);
//    std:: cout << "size of long double : " << sizeof(long double) << "\t"<< long_double <<std::endl;
//    std:: cout << "size of float : " << sizeof(float) <<"\t"<< double_number <<std::endl;
//    std:: cout << "size of double : " << sizeof(double) <<"\t"<< new_float <<std::endl;
//
//    std:: cout << "=============================================" <<std::endl;
//    std:: cout <<std::endl;
//    //boolean:
//    bool car {true};
//    bool bicycle {false};
//
//    if (car == true) {
//        std:: cout << "Mike have a car" <<std::endl;
//    }
//    else{
//        std:: cout <<"Mike haven't a car" <<std::endl;
//    }
//
//    if (bicycle != false) {
//        std:: cout << "Mike have a bicycle" <<std::endl;
//    }
//    else{
//        std:: cout <<"Mike haven't a bicycle" <<std::endl;
//    }
//
//    std:: cout << sizeof(bool) <<std::endl;
//    std:: cout<< std::endl;
//
//    std:: cout << car <<std::endl;
//    std:: cout << bicycle <<std::endl;
//
//    std:: cout << "=============================================" <<std::endl;
//
//    std:: cout <<std::boolalpha;
//    std:: cout << car <<std::endl;
//    std:: cout << bicycle <<std::endl;
//
//
//    std:: cout << "=============================================" <<std::endl;
//    std:: cout <<std::endl;
//
//    //character types:
//
//    char alpha {'a'};
//    char betta {65};
//    std:: cout <<alpha <<std::endl;
//    std:: cout <<betta<<std::endl;
//    std:: cout <<static_cast<int>(betta)<<std::endl;
//
//    std:: cout << "=============================================" <<std::endl;
//    std:: cout <<std::endl;
//
//    //auto type:
//
//    auto var = 12;          //int
//    auto var1 = 1.4323f;    //float
//    auto var2 = 1.35345;    //double
//    auto var3 = 3.533l;     //long double
//    auto var4 = 'e';        //char
//    auto var5 = 124u;       //unsigned
//    auto var6 = 4532ul;     //long unsigned
//    auto var7 = 24423ll;    //long long
//
////    std:: cout <<var<<std::endl;
////    std:: cout <<var1<<std::endl;
////    std:: cout <<var2<<std::endl;
////    std:: cout <<var3<<std::endl;
////    std:: cout <<var4<<std::endl;
////    std:: cout <<var5<<std::endl;
////    std:: cout <<var6<<std::endl;
////    std:: cout <<var7<<std::endl;
////
//    std:: cout << "=============================================" <<std::endl;
//    std:: cout <<std::endl;
//
//    //Assignments
//
//    int assigment_number = 432;
//    std:: cout <<assigment_number<<std::endl;
//
//    assigment_number = 432141;
//    std:: cout << assigment_number<< std::endl;
//
//    std:: cout << "=============================================" <<std::endl;
//    std:: cout <<std::endl;
//
//
//    int value {12};
//    int value2 {12};
//
//    std:: cout << value++ <<std::endl;
//    std:: cout << ++value2 <<std::endl;
//
//    //compound;
//    std:: cout << "=============================================" <<std::endl;
//    std:: cout <<std::endl;
//
//
//    int volume {45};
//
//    volume += 5;
//    std:: cout <<volume<<std::endl;
//
//    volume /= 5;
//    std:: cout <<volume<<std::endl;
//
//    volume *= 10;
//    std:: cout <<volume<<std::endl;
//
//    volume -= 10;
//    std:: cout <<volume<<std::endl;
//
//    volume %=4;
//    std:: cout <<volume<<std::endl;
//
//    std:: cout << "=============================================" <<std::endl;
//    std:: cout <<std::endl;
//
//   //Input/output manipulations:
////
////    int age;
////    double height;
////    std:: cout << "Enter your age :"<<std::endl;
////    std:: cin >> age;
////    std:: cout <<"Enter your height :"<<std::endl;
////    std:: cin >> height;
////    std:: cout <<"Your age is :" << age << "\nYour height is : " << height <<std::endl;
////
//    std:: cout << "================================================" <<std::endl;
//
//    std:: cout << "Formated table :" <<std::endl;
//
//    std:: cout <<std::setw(10) << "Firstname" <<std::setw(10) << "lastname" <<std::setw(10)<< "Age"<<std::endl;
//    std:: cout <<std::setw(10) << "James" <<std::setw(10) << "Cameron" <<std::setw(10)<<"43"<<std::endl;
//    std:: cout <<std::setw(10) << "Anatoliy" <<std::setw(10) << "Cherpov" <<std::setw(10)<< "54"<<std::endl;
//    std:: cout <<std::setw(10) << "Hakan" <<std::setw(10) << "Ozturk" <<std::setw(10)<<"23"<<std::endl;
//    std:: cout << "================================================" <<std::endl;
//    std:: cout <<std::endl;
//
//
//    std:: cout << "================================================\nboolalpha" <<std::endl;
//    std:: cout <<std::endl;
//
//    bool logic {true};
//    bool logic2 {false};
//    std:: cout <<"noboolalpha"<<std::endl;
//    std:: cout << var1 << var2 <<std::endl;
//
//    std:: cout <<std::boolalpha;
//    std:: cout << "boolalpha" <<std::endl;
//    std:: cout << var1 << var2 <<std::endl;
//
//
//    return 0;
//}
#include <iostream>
#include <limits>
#include <ios>
#include <iomanip>
#include <cmath>

int main(){
    
    //SETFILL AND SETW FUNCTIONS: right/left/internal
    //
    //    short int set_width {20};
    //
    //    std:: cout <<"Firstname"<<std::setw(set_width)<< "Lastname"<<std::setw(set_width)<<"Age"<<std::endl;
    //    std:: cout <<std::setfill('-');
    //
    ////    std:: cout <<std::right;
    ////    std:: cout <<std::left;
    //    std::cout <<std::internal;
    //    std:: cout <<std::setw(set_width)<<"Ahmet"<<std::setw(set_width)<<"Hakan"<<std::setw(set_width)<<"23"<<std::endl;
    //    std:: cout <<std::setw(set_width)<<"Ali"<<std::setw(set_width)<<"Alien"<<std::setw(set_width)<<"65"<<std::endl;
    //    std:: cout <<std::setw(set_width)<<"Emin"<<std::setw(set_width)<<"Bosnevi"<<std::setw(set_width)<<"29"<<std::endl;
    //    std:: cout <<std::setw(set_width)<<"Jacob"<<std::setw(set_width)<<"Cameron"<<std::setw(set_width)<<"44"<<std::endl;
    //    std:: cout <<std::setw(set_width)<<"Columb"<<std::setw(set_width)<<"Niek"<<std::setw(set_width)<<"15"<<std::endl;
    //
    
    //BOOLALPHA FUNCTIONS:
    
    //    std:: cout <<"boolalpha" <<std::endl;
    //    bool alpha {true};
    //    bool betta {false};
    //
    //    std:: cout <<"no boolalpha"<<std::endl;
    //    std:: cout << alpha <<std::endl;
    //    std:: cout << betta <<std::endl;
    //    std:: cout <<std::endl;
    //
    //    std:: cout <<"boolalpha"<<std::endl;
    //    std:: cout <<std::boolalpha;
    //    std:: cout << alpha <<std::endl;
    //    std:: cout << betta <<std::endl;
    
    
    
    //SHOWPOINT FUNCTIONS:
    //
    //    double d {34.2};
    //    double e {234.20};
    //    double f {23.0};
    //    int a {45};
    //
    //    std:: cout <<"default showpoint"<<std::endl;
    //    std:: cout << "number 1 : "<< d <<std::endl;
    //    std:: cout << "number 2 : "<< e <<std::endl;
    //    std:: cout << "number 3 : "<< f <<std::endl;
    //    std:: cout << "number 4 : "<< a <<std::endl;
    //
    //    std:: cout << "+++++++++++++++++++++++++"<<std::endl;
    //    std:: cout <<std::showpoint;
    //    std:: cout << "showpoint"<<std::endl;
    //    std:: cout << "number 1 : "<< d <<std::endl;
    //    std:: cout << "number 2 : "<< e <<std::endl;
    //    std:: cout << "number 3 : "<< f <<std::endl;
    //    std:: cout << "number 4 : "<< a <<std::endl;
    //
    //
    
    //SHOWPOS() FUNCTION; VIEWER POSITIVE AND NEGATIVE MODIFIRIES;
    //
    //    short int num1 {34};
    //    short int num2 {-54};
    //
    //    std:: cout <<"view by default"<<std::endl;
    //    std:: cout << "first number : " << num1 <<std::endl;
    //    std:: cout << "second number : " << num2 <<std::endl;
    //
    //    std:: cout << "with showpos function" <<std::endl;
    //    std:: cout <<std::showpos;
    //
    //    std:: cout <<std::setw(10)<< "first number : "<<std::setw(10)<<num1 <<std::endl;
    //    std:: cout <<std::setw(10)<< "second number : "<<std::setw(10)<<num2<<std::endl;
    //
    
    
    //different number types: std::dec/hex/oct; std::uppercase;
    //
    //    int pos_int {717171};
    //    int neg_int {-325235};
    //    double double_var {345.234};
    //
    //    std::cout<<"format types by default"<<std::endl;
    //    std::cout <<"first number : " << pos_int <<std::endl;
    //    std::cout << "second number : " << neg_int <<std::endl;
    //    std::cout <<"third number : " << double_var <<std::endl;
    //    std::cout <<"+++++++++++++++++++++++++++++"<<std::endl;
    //
    //    std::cout <<std::hex;
    //    std::cout <<"format by hexadecimal:"<<std::endl;
    //    std::cout <<std::uppercase<<"first number : " << pos_int <<std::endl;
    //    std::cout << "second number : " << neg_int <<std::endl;
    //    std::cout <<"third number : " << double_var <<std::endl;
    //    std::cout <<"+++++++++++++++++++++++++++++"<<std::endl;
    //
    //    std::cout <<std::oct;
    //    std::cout <<"format by octal"<<std::endl;
    //    std::cout <<"first number : " << pos_int <<std::endl;
    //    std::cout << "second number : " << neg_int <<std::endl;
    //    std::cout <<"third number : " << double_var <<std::endl;
    //    std::cout <<"+++++++++++++++++++++++++++++"<<std::endl;
    //
    //    std::cout<<std::dec;
    //    std::cout<<std::uppercase;
    //    std::cout <<"format by decimal" <<std::endl;
    //    std::cout <<"first number : " << pos_int <<std::endl;
    //    std::cout << "second number : " << neg_int <<std::endl;
    //    std::cout <<"third number : " << double_var <<std::endl;
    
    
    //fixed and scietific : for floating point values;
    //
    //    double a {1.2345435643633634};
    //    double b {2006.0};
    //    double c {1.34e-10};
    //
    //    std::cout <<"By default veiw"<<std::endl;
    //    std::cout <<a<<std::endl;
    //    std::cout <<b<<std::endl;
    //    std::cout <<c<<std::endl;
    //    std::cout <<"+++++++++++++++++++++++++++++"<<std::endl;
    //
    //    std::cout <<std::fixed;
    //    std::cout <<"view by fixed"<<std::endl;
    //    std::cout <<a<<std::endl;
    //    std::cout <<b<<std::endl;
    //    std::cout <<c<<std::endl;
    //    std::cout <<"+++++++++++++++++++++++++++++"<<std::endl;
    //
    //    std::cout <<std::scientific;
    //    std::cout <<"view by scienfitic"<<std::endl;
    //    std::cout <<a<<std::endl;
    //    std::cout <<b<<std::endl;
    //    std::cout <<c<<std::endl;
    //    std::cout <<"+++++++++++++++++++++++++++++"<<std::endl;
    //
    //    //FOR DESIBLE ALL THESE SETTINGS:
    //    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    //    std::cout <<a<<std::endl;
    //    std::cout <<b<<std::endl;
    //    std::cout <<c<<std::endl;
    //    std::cout <<"+++++++++++++++++++++++++++++"<<std::endl;
    //
    //
    
    //NUMERICAL LIMITS;
    //
    //        short int set_width {25};
    //        //chars
    //        std::cout <<std::setw(set_width)<<"char min: "<<std::setw(set_width)<<std::numeric_limits<char>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned char min: "<<std::setw(set_width)<<std::numeric_limits<unsigned char>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed char min: "<<std::setw(set_width)<<std::numeric_limits<signed char>::min()<<std::endl;
    //
    //        std::cout <<std::setw(set_width)<<"char max: "<<std::setw(set_width)<<std::numeric_limits<char>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned char max: "<<std::setw(set_width)<<std::numeric_limits<unsigned char>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed char max: "<<std::setw(set_width)<<std::numeric_limits<signed char>::max()<<std::endl;
    //
    //        std::cout <<std::setw(set_width)<<"char lowest: "<<std::setw(set_width)<<std::numeric_limits<char>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned char lowest: "<<std::setw(set_width)<<std::numeric_limits<unsigned char>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed char lowest: "<<std::setw(set_width)<<std::numeric_limits<signed char>::min()<<std::endl;
    //
    //
    //        //ints
    //        std::cout <<"MAX VALUE OF INTEGERS"<<std::endl;
    //        std::cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    //        std::cout <<std::setw(set_width)<<"int: "<<std::setw(set_width)<<std::numeric_limits<int>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned int: "<<std::setw(set_width)<<std::numeric_limits<unsigned int>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed int: "<<std::setw(set_width)<<std::numeric_limits<signed int>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"short int: "<<std::setw(set_width)<<std::numeric_limits<short int>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned short int: "<<std::setw(set_width)
    //            <<std::numeric_limits<unsigned short int>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed short int: "<<std::setw(set_width)<<std::numeric_limits<signed short int>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"long int: "<<std::setw(set_width)<<std::numeric_limits<long int>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned long int: "<<std::setw(set_width)<<std::numeric_limits<unsigned long int>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed long int: "<<std::setw(set_width)<<std::numeric_limits<signed long int>::max()<<std::endl;
    //
    //        std::cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    //        std::cout <<"MIN VALUE OF INTEGERS"<<std::endl;
    //        std::cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    //        std::cout <<std::setw(set_width)<<"int: "<<std::setw(set_width)<<std::numeric_limits<int>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned int: "<<std::setw(set_width)<<std::numeric_limits<unsigned int>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed int: "<<std::setw(set_width)<<std::numeric_limits<signed int>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"short int: "<<std::setw(set_width)<<std::numeric_limits<short int>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)
    //            <<"unsigned short int: "<<std::setw(set_width)<<std::numeric_limits<unsigned short int>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed short int: "<<std::setw(set_width)<<std::numeric_limits<signed short int>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"long int: "<<std::setw(set_width)<<std::numeric_limits<long int>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned long int: "<<std::setw(set_width)<<std::numeric_limits<unsigned long int>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed long int: "<<std::setw(set_width)<<std::numeric_limits<signed long int>::min()<<std::endl;
    //
    //        std::cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    //        std::cout <<"LOWEST VALUE OF INTEGERS"<<std::endl;
    //        std::cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    //        std::cout <<std::setw(set_width)<<"int: "<<std::setw(set_width)<<std::numeric_limits<int>::lowest()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned int: "<<std::setw(set_width)<<std::numeric_limits<unsigned int>::lowest()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed int: "<<std::setw(set_width)<<std::numeric_limits<signed int>::lowest()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"short int: "<<std::setw(set_width)<<std::numeric_limits<short int>::lowest()<<std::endl;
    //        std::cout <<std::setw(set_width)
    //            <<"unsigned short int: "<<std::setw(set_width)<<std::numeric_limits<unsigned short int>::lowest()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed short int: "<<std::setw(set_width)<<std::numeric_limits<signed short int>::lowest()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"long int: "<<std::setw(set_width)<<std::numeric_limits<long int>::lowest()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"unsigned long int: "
    //            <<std::setw(set_width)<<std::numeric_limits<unsigned long int>::lowest()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"signed long int: "<<std::setw(set_width)<<std::numeric_limits<signed long int>::lowest()<<std::endl;
    //
    //        std::cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    //        std::cout <<"VALUE OF DOUBLE FLOAT"<<std::endl;
    //        std::cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    //        std::cout <<std::setw(set_width)<<"float: "<<std::setw(set_width)<<std::numeric_limits<float>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"float: "<<std::setw(set_width)<<std::numeric_limits<float>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"float: "<<std::setw(set_width)<<std::numeric_limits<float>::lowest()<<std::endl;
    //
    //        std::cout <<std::setw(set_width)<<"double: "<<std::setw(set_width)<<std::numeric_limits<double>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"double: "<<std::setw(set_width)<<std::numeric_limits<double>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"double: "<<std::setw(set_width)<<std::numeric_limits<double>::lowest()<<std::endl;
    //
    //        std::cout <<std::setw(set_width)<<"long double: "<<std::setw(set_width)<<std::numeric_limits<long double>::max()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"long double: "<<std::setw(set_width)<<std::numeric_limits<long double>::min()<<std::endl;
    //        std::cout <<std::setw(set_width)<<"long double: "<<std::setw(set_width)<<std::numeric_limits<long double>::lowest()<<std::endl;
    //
    
    //Mathematic functions://ceil() floor() abs() sqrt() pow() fmod() sin.cos.tan() cbrt()
    
//    float weight {9.3};
//    std::cout <<"function of floor "<<std::floor(weight)<<std::endl;
//    std::cout <<"function of ceil  "<<std::ceil(weight)<<std::endl;
//
//    double saving {-5000};
//    std::cout <<"function of abs "<<std::abs(saving)<<std::endl;
//    std::cout <<"function of abs  "<<std::abs(weight)<<std::endl;
//
//    double exponential {std::exp(10)};
//    std::cout <<"function of exponential f(x)=eˆx where e,,  :"<<exponential<<std::endl;
//
//    short int value {2};
//    short int power {5};
//    std::cout <<"function of pow : "<<std::pow(value,power)<<std::endl;
//
//    std::cout <<"log : "<<std::log(54.59)<<std::endl;
//    std::cout <<"log : "<<std::log10(10000)<<std::endl;
//
//
//    double count {49.49};
//    short int count2 {225};
//    std::cout <<"function of sqrt : "<<std::sqrt(count)<<std::endl;
//    std::cout <<"function of sqrt : "<<std::sqrt(count2)<<std::endl;
//
//    std::cout <<"function of round if 2.654 : "<<std::round(2.654)<<std::endl;
//    std::cout <<"function of round if 2.5 : "<<std::round(2.5)<<std::endl;
//    std::cout <<"function of round if 2.4 : "<<std::round(2.4)<<std::endl;
//
//    std::cout <<"sin() :"<<std::sin(10)<<std::endl;
//    std::cout <<"cos() :"<<std::cos(23)<<std::endl;
//    std::cout <<"tan() :"<<std::tan(33)<<std::endl;
//
//    std::cout <<"fmod() :"<<std::fmod(9, 2)<<std::endl;
//    std::cout <<"cbrt() :"<<std::cbrt(27)<<std::endl;
//    std::cout <<"fma() :"<<std::fma(12, 2, 4)<<std::endl;
//
//
//
//    //Weird integral types:
//    short int value1 {12};
//    short int value2 {42};
//
//    std::cout <<"size of value 1 :"<<sizeof(value1)<<std::endl;
//    std::cout <<"size of value 1 :"<<sizeof(value1)<<std::endl;
//
//    char kaar1 {40};
//    char kaar2 {50};
//
//    std::cout <<"size of kaar 1 :"<<sizeof(kaar1)<<std::endl;
//    std::cout <<"size of kaar 2 :"<<sizeof(kaar2)<<std::endl;
//
//    auto result1 {value1 + value2};
//    auto result2 {kaar1 + kaar2};
//
//    std::cout <<"new size of sum values :"<<sizeof(result1)<<std::endl;
//    std::cout <<"new size of sum kaars :"<<sizeof(result2)<<std::endl;
    
    
    

}
