#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here

    if('M' == S && height < 1.70){
        cout << "Short";
    } else if(S == 'M' && (height >= 1.70 && height < 1.85)){
        cout << "Normal";
    } else if(S == 'M' && height >= 1.85){
        cout << "Tall";
    } else if(S=='F' && height < 1.60){
        cout << "Short";
    } else if(S == 'F' && (height >= 1.60 && height < 1.75)){
        cout << "Normal";
    } else if(S == 'F' && height >= 1.75){
        cout << "Tall";
    }
    return 0;
    // use return to return your result
    // make use of control flow statements
}
