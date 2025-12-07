#include <iostream>
#include <iomanip>

int main() {
    double num = 1234.56789;

    std::cout << std::setprecision(4) << num << std::endl; // 1235
    return 0;
}
//Yukarıdaki durumda, toplamda sadece 4 basamak yazılır, bu da ondalık kısmın kesilmesine neden olur.


// int main() {
//     double num = 1234.56789;

//     std::cout << std::fixed << std::setprecision(2) << num << std::endl; // 1234.57
//     return 0;
// }

// //std::fixed ile birlikte std::setprecision(), ondalık basamak sayısını ondalık noktadan sonra olacak şekilde ayarlar.

