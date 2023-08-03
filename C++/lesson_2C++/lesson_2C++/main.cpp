#include <iostream>
#include <ios>
#include <cmath>
#include <iomanip>
int main(){
    //
    //    bool red {false};
    //    bool green {true};
    //    bool polis_stop {true};
    //    bool yellow {false};
    //    bool polis_run {true};
    //
    //    if (green) {
    //        if (polis_stop) {
    //            std::cout<<"Stop!"<<std::endl;
    //        }
    //        else{
    //            std::cout <<"Go"<<std::endl;
    //        }
    //    }
    //    if (red && !polis_run) {
    //        std::cout<<"Stop!"<<std::endl;
    //    }
    //    if (yellow) {
    //        std::cout<<"Slow down"<<std::endl;
    //    }
    //
    //    short int number1 {55};
    //    short int number2 {66};
    //
    //    bool result {number1 > number2};
    //    std::cout <<std::boolalpha<<"result : "<<result<<std::endl;
    //
    //    if (result) {
    //        std::cout <<"number one is not less"<<std::endl;
    //    }else{
    //        std::cout <<"number one is less"<<std::endl;
    //    }
    //
    //
    //
    //    const int Pen {10};
    //    const int Marker {20};
    //    const int Eraser {30};
    //    const int Rectangle {40};
    //    const int Circle {50};
    //    const int Ellipse {60};
    //
    //    int tool {Circle};
    ////
    //    if (tool == Pen) {
    //        std::cout <<"It's a pen!"<<std::endl;
    //    }
    //    else if(tool == Marker){
    //        std::cout<<"It's a Marker!"<<std::endl;
    //    }
    //    else if(tool == Eraser){
    //        std::cout <<"It's a Eraser!"<<std::endl;
    //    }
    //    else if(tool == Rectangle){
    //        std::cout <<"It's a Restangle!"<<std::endl;
    //    }
    //    else if (tool == Circle){
    //        std::cout <<"It's a Circle!"<<std::endl;
    //    }
    //    else if (tool == Ellipse){
    //        std::cout <<"It's a Ellipse!"<<std::endl;
    //    }
    //
    
    //    switch (tool) {
    //        case Ellipse:
    //            std::cout <<"It's a Ellipse!"<<std::endl;
    //            break;
    //        case Pen:
    //            std::cout <<"It's a pen!"<<std::endl;
    //            break;
    //        case Rectangle:
    //            std::cout <<"It's a Restangle!"<<std::endl;
    //            break;
    //        case Eraser:
    //            std::cout <<"It's a Eraser!"<<std::endl;
    //            break;
    //        case Marker:
    //            std::cout<<"It's a Marker!"<<std::endl;
    //            break;
    //        default:
    //            std::cout <<"Not is one of them"<<std::endl;
    //            break;
    //    }
    //
    //    short int a {12};
    //    short int b {22};
    //    int max  {};
    //
    //    max = (a < b) ? b : a;
    //    std::cout<<"Max number is : "<<max<<std::endl;
    //
    //
    //    std::cout <<"speed"<<std::endl;
    //    bool fast {true};
    //    std::cout <<std::endl;
    //
    //    int max_speed = fast ? 343 : 80;
    //    std::cout<<"The speed is : "<<max_speed<<std::endl;
    //
    
    //    const size_t counter {10};
    //    for (unsigned int i {}; i <= counter ; ++i) {
    //        std::cout <<"I love C++ "<<i <<std::endl;
    //    }
    //
    //    std::cout<<std::endl;
    //
    //    for (size_t h{}; h <= counter; h++) {
    //        std::cout <<"I love C++ "<<h<<std::endl;
    //    }
    //    std::cout <<std::numeric_limits<size_t>::max()<<std::endl;
    //    std::cout <<std::numeric_limits<size_t>::min()<<std::endl;
    //    std::cout <<std::numeric_limits<size_t>::lowest()<<std::endl;
    //
    
    //    const size_t COUNTER {10};
    //    unsigned short int start_loop {1};
    //
    //    while (start_loop <= COUNTER) {
    //        std::cout<<start_loop<<" : Number"<<std::endl;
    //        ++start_loop;
    //    }
    //
    //
    
    //    const size_t COUNTER {10};
    //    size_t i {0};
    //
    //    do {
    //        std::cout<<"Loop is working : "<<i<<std::endl;
    //        ++i;
    //    } while (i > COUNTER);
    
    
    //    int args [10];
    //    const size_t COUNTER {10};
    //    unsigned short int i {0};
    //
    //    while (i < COUNTER) {
    //        args[i] = std::pow(i, i);
    //        std::cout<<"n number power square of n : "<<i<< " = "<<args[i]<<std::endl;
    //        ++i;
    //    }
    //
    //    const unsigned short COUNTER {10};
    //    int args [10];
    //    int result {0};
    //    const int score {10};
    //
    //attentaion!!!  empty array data have jank data!!!
    
    //    for (size_t i {}; i< score; ++i) {
    //        result += args[i];
    //    }
    //
    //    std::cout <<"sum of our array is : "<<result<<std::endl;
    //    std::cout<<std::endl;
    //
    //    double numbers [4] {1.2,3.2,4.2,5.3};
    //
    //    for (size_t i { }; i < 4; ++i) {
    //        std::cout <<"number : "<<numbers[i]<<std::endl;
    //    }
    //
    //    std::cout<<std::endl;
    //
    //    //this bellow loop constructions auto determine length our array if you don't know length of array;
    //    int args2  []{532,234,234,432,234,335434,345,345435,35345};
    //    long int sum_numbers {};
    //
    //    for(auto values : args2){
    //        sum_numbers += values;
    //        std::cout<<"sums : "<<sum_numbers<<std::endl;
    //    }
    //
    //    std::cout<<"result of sum number's in array is :"<<sum_numbers<<std::endl;
    //
    
    //        int args2  []{532,234,234,432,234,335434,345,345435,35345};
    //
    //
    //        std::cout <<"sizeof args : "<<sizeof(args2)<<std::endl;
    //        std::cout <<"length of args : "<<std::size(args2)<<std::endl;
    //        std::cout <<"size divide length of args :"<<std::size(args2)/sizeof(args2)<<std::endl;
    //        std::cout <<std::endl;
    //
    //
    //        //before C++17 they for find lenght of array used sizeof(array) to divide sizeof(array[o])==first sizeof array number;
    //        size_t count {sizeof(args2)/sizeof(args2[0])};
    //        std::cout <<count<<std::endl;
    //
    //        std::cout <<std::endl;
    //
    //        for (size_t i { }; i < std::size(args2); ++i){
    //            std::cout<<args2[i]<<std::endl;
    ////        }
    //
    //    char values [5] {'h','e','l','l','o'};
    //
    //    for(auto item : values){
    //        std::cout <<item;
    //    }
    //    std::cout<<std::endl;
    //
    //    char values2 [] {'h','e','l','l','o'};
    //
    //    for (auto items : values2) {
    //        std::cout<<items;
    //    }
    //    std::cout<<std::endl;
    //
    //    char values3 [6] {'h','e','l','l','o'};
    //
    //    for (size_t i { }; i < std::size(values3); ++i) {
    //        std::cout<<values3[i]<<std::endl;
    //    }
    //
    //    //string leteral
    //    char message []{"Hello"};
    //    std::cout<<message<<std::endl;
    //    std::cout<<sizeof(message)<<std::endl;
    
    //
    //    //References
    //
    //    int value {10};
    //    int &ref_value {value};
    //    std::cout<<ref_value<<std::endl;
    //    ref_value = 12;
    //    std::cout<<ref_value<<std::endl;
    //    value = 3242;
    //    std::cout<<ref_value<<std::endl;
    //
    //    const int value_const {21};
    //    const int &ref_value_const {value_const};
    //
    //    std::cout<<ref_value_const<<std::endl;
    //
    //
    //
    //    int args [] {1,2,3,4,5,6,7,8,9,10};
    //    for (auto &items : args) {
    //        items = items * items;
    //        std::cout<<items<<std::endl;
    //    }
    //
    //    for (auto items : args) {
    //        std::cout<<items<<std::endl;
    //    }
    //
    //    for (const auto items : args) {
    //        //statements....
    //        std::cout<<items<<std::endl;
    //    }
    //    std::cout<<std::endl;
    //
    //    int value {10};
    //    int *p = &value;
    //
    //    std::cout<<*p<<std::endl;
    //    std::cout<<p<<std::endl;
    //
//
//
//    unsigned int value {152};
//    unsigned int *value_pointer {&value};
//
//    std::cout <<"Address of value in Ram : "<<value_pointer<<std::endl;
//    std::cout <<"value of our variable : "<<*value_pointer<<std::endl;
//
//    unsigned int address {*value_pointer};
//    std::cout<<address<<std::endl;
//
//    *value_pointer = 45;
//    std::cout<<value_pointer<<std::endl;
//    std::cout<<*value_pointer<<std::endl;
//    std::cout<<value<<std::endl;
//
//
//    std::cout<<std::endl;
//    std::cout<<std::endl;
//
//    int value2 {142};
//    int value3 {435};
//
//    int *pointer_value2 {&value2};
//    int *pointer_value3 {&value3};
//
//    std::cout<<"address : "<<pointer_value2<<" value2 : "<<*pointer_value2<<std::endl;
//    std::cout<<"address : "<<pointer_value3<<" value3 : "<<*pointer_value3<<std::endl;
//
//    std::cout<<std::endl;
//    std::cout<<std::endl;
//
//    pointer_value2 = pointer_value3;
//
//    std::cout<<"address : "<<pointer_value2<<" value : "<<*pointer_value2<<std::endl;
//    *pointer_value2 = 99;
//    std::cout<<"value of value3 : "<<value3 <<std::endl;
//    std::cout<<"value of value2 : "<<value2 <<std::endl;
//    std::cout<<std::endl;
    //nullptr
//    unsigned short int *no_pointer {nullptr};
//
//    int number {124};
//    int *pn {&number};
//
//    int number2 {533};
//    int *pn2 {&number2};
//
//    auto max = pn > pn2 ? pn : pn2;
//
//    if (pn > pn2) {
//        std::cout<<"pn greater than pn2"<<std::endl;
//    }
//    else{
//        std::cout<<"pn less than pn2"<<std::endl;
//    }
//
//    std::cout<<std::endl<<max<<std::endl;
//
//    std::cout<<*pn<<std::endl;
//    std::cout<<pn<<std::endl;
//    std::cout<<&pn<<std::endl;
//
//    char *p_char_value {nullptr};
//    char value {'A'};
//
//    p_char_value = &value;
//    std::cout<<*p_char_value<<std::endl;
//    std::cout<<&p_char_value<<std::endl;
//
//    char value2 {'B'};
//    p_char_value = &value2;
//    std::cout<<p_char_value<<std::endl;
//    std::cout<<*p_char_value<<std::endl;
//    std::cout<<&p_char_value<<std::endl;
//
//    const char *value_refuse {"hell"};
//    std::cout<<value_refuse<<std::endl;
//    std::cout<<*value_refuse<<std::endl;
//    *value_refuse ='B';
//    std::cout<<value_refuse<<std::endl;
    
//
//    int *p_number{nullptr};
//    p_number = new int;
//
//    *p_number = 142;
//    std::cout<<*p_number<<std::endl;
//    std::cout <<p_number<<std::endl;
//   //return memory
//    delete p_number;
//    p_number = nullptr;
//
    //CRASHES
//
//    std::cout<<"Deleted pointer"<<std::endl;
//    int *p_number {new int{67}};
//
//    std::cout<<"before delete :"<<*p_number<<std::endl;
//    std::cout<<p_number<<std::endl;
//    delete p_number;
//    std::cout<<std::endl;
//
//    //some times your programm get crash..
//    std::cout<<"After delete :"<<*p_number<<std::endl;
//    std::cout<<p_number<<std::endl;
//    std::cout<<"Program succesfully finished!"<<std::endl;
//    std::cout<<std::endl;
//
//
//    int *p_value {new int {63}};
//    int *p_pointer_value {p_value};
//
//    std::cout<<" Address P_value : "<<p_value<<"  *p_value : "<<*p_value<<std::endl;;
//    std::cout<<"Address p_pointer : "<<p_pointer_value<<" value of p_pointer : "<<*p_pointer_value<<std::endl;;
//
//    delete p_value;
//
//    //undifined behavour: CRASH/garbage or whatever
//    std::cout<<"Address of p pointer: "<<p_pointer_value<<"  Value of ppointer :"<<*p_pointer_value<<std::endl;
//
//      //SOLUTIONS:
    
//    std::cout<<"Solution 1: "<<std::endl;
//    int *p_number {};
//    int *p_value {new int {34}};
//
//    //Check nullptr before use:
//    if (p_number != nullptr) {
//        std::cout<<"p_number : "<<*p_number<<std::endl;
//    }
//    else{
//        std::cout<<"P_number is nullptr Invalid address!"<<std::endl;
//    }
////
//
//    std::cout<<"Solution 2 :"<<std::endl;
//    int *p_number {new int {34}};
//
//    std::cout<<"Address number : "<<p_number<<"value of pointer : "<<*p_number<<std::endl;
//
//    delete p_number;
//    p_number = nullptr;
//
//    if (!(p_number == nullptr)) {
//        std::cout<<"p_number is not nullptr you can use it!"<<std::endl;
//    }
//    else{
//        std::cout<<"Pointer is invalid !!!"<<std::endl;
//    }
//
    
//    std::cout<<"Solution 3 : "<<std::endl<<std::endl;
//    int *p_value {new int {345}};
//    int *p_pointer {p_value};
//    std::cout<<p_value<<"    "<<*p_value<<std::endl<<std::endl;
//
//    delete p_value;
//    p_value = nullptr;
//
//    if (!(p_value == nullptr)) {
//        std::cout<<"address :"<<p_pointer<<"value of pointer : "<<std::endl;
//    }else{
//        std::cout<<"p_pointer is invalid!!"<<std::endl;
//    }
    
//    //EXCEPTIONS AND TRY CATCH CONSTRUCTOR:
//
//    for (size_t i {0}; i < 10000000; ++i) {
//        try {
//            int *data = new int[10000000000];
//            std::cout<<*data<<std::endl;
//        } catch (std::exception& ex) {
//            std::cout<<"Something went wrong : "<<ex.what()<<std::endl;
//        }
//    }
//
//    //nothrow
//
//    for (size_t i {0}; i < 100; ++i) {
//        int * data = new(std::nothrow) int[100000000];
//
//        if (data != nullptr) {
//            std::cout<<"Data allocated!"<<std::endl;
//        }else{
//                std::cout<<"Data allocated failed!!!"<<std::endl;
//            }
//    }
    
//
//    std::cout<<"NUll pointer check:"<<std::endl<<std::endl;
//
//    int *pointer { };
//    pointer = new int(43);
//
//    if (pointer != nullptr) {
//        std::cout<<*pointer<<std::endl;
//    }else{
//        std::cout<<"pointer is invalid1!"<<std::endl;
//    }
//
//    delete pointer;
//    pointer = nullptr;
//
//    int *newpoinre { };
//
//    if (newpoinre) {
//        std::cout<<newpoinre<<std::endl;
//    }else{
//        std::cout<<"invalid"<<std::endl;
//    }
    
//
//
//    const size_t size{10};
//
//    double *p_salaries {new double[size]};
//    double *p_students{new(std::nothrow) double[size]{}};
//    double *p_cars{new(std::nothrow) double[size] {32.5,23.5,324.65} };
//
//    if (p_salaries) {
//        for (size_t i {0}; i < size; ++i) {
//            std::cout<<"value :"<<p_salaries[i]<<" : "<<*(p_salaries + i)<<std::endl;
//        }
//    }
//
//    std::cout<<std::endl;
//
//    if (p_students) {
//        for (size_t i {0}; i < size; ++i) {
//            std::cout<<"value :"<<p_students[i]<<" : "<<*(p_students + i)<<std::endl;
//        }
//    }
//
//    std::cout<<std::endl;
//
//    if (p_cars) {
//        for (size_t i {0}; i < size; ++i) {
//            std::cout<<"value :"<<p_cars[i]<<" : "<<*(p_cars + i)<<std::endl;
//        }
//    }
//
//
//    delete[ ] p_salaries;
//    p_salaries= nullptr;
//
//    delete[ ] p_students;
//    p_students = nullptr;
//
//    delete[ ] p_cars;
//    p_cars = nullptr;
    
    
    int data {64};
    double data_double {543.34};
    
    int& ref_int_data {data};
    double& ref_double_data{data_double};
    
    int width {20};
    
    std::cout<<std::setw(width)<<"original value : "<<data<<std::setw(width)<<"ref value : "<<&data<<std::endl;
    std::cout<<std::setw(width)<<"original value : "<<data_double<<std::setw(width)<<"ref value : "<<&data_double<<std::endl;
    
    std::cout<<std::setw(width)<<"original value : "<<ref_int_data<<std::setw(width)<<"ref value : "<<&ref_int_data<<std::endl;
    std::cout<<std::setw(width)<<"original value : "<<ref_double_data<<std::setw(width)<<"ref value : "<<&ref_double_data<<std::endl;
    
    data = 999;
    data_double = 333.22;
    std::cout<<std::endl;
    
    std::cout<<std::setw(width)<<"original value : "<<data<<std::setw(width)<<"ref value : "<<&data<<std::endl;
    std::cout<<std::setw(width)<<"original value : "<<data_double<<std::setw(width)<<"ref value : "<<&data_double<<std::endl;
    
    std::cout<<std::setw(width)<<"orißginal value : "<<ref_int_data<<std::setw(width)<<"ref value : "<<&ref_int_data<<std::endl;
    std::cout<<std::setw(width)<<"original value : "<<ref_double_data<<std::setw(width)<<"ref value : "<<&ref_double_data<<std::endl;
    
    
    return 0;
}
