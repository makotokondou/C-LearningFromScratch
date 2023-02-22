#include <iostream>
#include "lamda.h"

/* ref
    https://c.keicode.com/cpp/cpp-lambda.php
*/

using namespace std;

int Lamda::Lamda_main()
{
  [](){};


#if 0 // 関数オブジェクト代入
  auto func = [] { std::cout << "hello" << std::endl; };
  func();
#endif

#if 0 // 変数キャプチャ
  int i = 123;
  auto func2 = [i] () { std::cout << "f(): i = " << i << std::endl;};
  func2();

  i = 999;
  func2();
#endif

#if 0 // ラムダ式の引数
  int i = 0;
  auto func3 = [i] (int j) {
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
  };
  i = 1;
  func3(i);
#endif

#if 1 // 戻り値指定
  auto func4 = [] ( int i, int j) -> int {
    return i * j;
  };
  cout << func4(2, 3) << endl;

#endif
  return 0;
}