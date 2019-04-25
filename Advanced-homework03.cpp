/* 計算機概論實務-進階練習作業-作業3 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/04/09 01:31 */  
/*題目：
企業發放的獎金根據利潤提成。
利潤(I)低於或等於10萬元時，獎金可提10%；
利潤高於10萬元，低於20萬元時，低於10萬元的部分按10%提成，高於10萬元的部分，可提成7.5%；
20萬到40萬之間時，高於20萬元的部分，可提成5%；
40萬到60萬之間時高於40萬元的部分，可提成3%；
60萬到100萬之間時，高於60萬元的部分，可提成1.5%；高於100萬元時，超過100萬元的部分按1%提成。
*/ 
// 100萬以上  60萬到100萬  40萬到60萬  20萬到40萬  利潤高於10萬元，低於20萬元
//    ||          ||           ||          ||                ||  
//    1%         1.5%          3%          5%     低於10萬元的部分按10%提成，高於10萬元的部分，可提成7.5% 
#include <stdio.h>
#include <stdlib.h>
int main ( ) { 
double i ;
     double profit1 , profit2 , profit4 , profit6 , profit10 , profit ;
     printf ("當月利潤為：" ) ;
     scanf ( "%lf" ,& i ) ;
     profit1 = 100000 * 0.1 ;//低於10萬元的部分按10%提成 
     profit2 = profit1 + 100000 * 0.075 ;//低於10萬元的部分按10%提成+高於10萬元的部分，可提成7.5% 
     profit4 = profit2 + 200000 * 0.05 ;//低於10萬元的部分按10%提成+高於10萬元的部分，可提成7.5%+高於20萬元的部分，可提成5%  
     profit6 = profit4 + 200000 * 0.03 ;//低於10萬元的部分按10%提成+高於10萬元的部分，可提成7.5%+高於20萬元的部分，可提成5%   
     profit10 = profit6 + 400000 * 0.015 ;//低於10萬元的部分按10%提成+高於10萬元的部分，可提成7.5%+高於20萬元的部分，可提成5%+高於60萬元的部分，可提成1.5% 
     if ( i <= 100000 ) 
	 { profit =i * 0.1 ; //低於或等於10萬元時，獎金可提10% 
	 printf ( "應發放獎金總數：profit=%lf ",profit);
     } 
	 else if ( i <= 200000 ) 
	 { profit = profit1 + ( i - 100000 ) * 0.075;//低於10萬元的部分按10%提成+高於10萬元的部分，可提成7.5%
	 printf ( "應發放獎金總數：profit=%lf ",profit);
	 } 
	 else if ( i <= 400000 ) 
	 { 
	 profit = profit2 + ( i - 200000 ) * 0.05;//低於10萬元的部分按10%提成+高於10萬元的部分，可提成7.5%+高於20萬元的部分，可提成5%。 
	 printf ( "應發放獎金總數：profit=%lf ",profit);
     } 
	 else if ( i <= 600000 ) 
	 { profit = profit4 + ( i - 400000 ) * 0.03;//低於10萬元的部分按10%提成+高於10萬元的部分，可提成7.5%+高於20萬元的部分，可提成5%+高於40萬元的部分，可提成3%。 
	 printf ( "應發放獎金總數：profit=%lf ",profit);
	 } 
	 else if ( i <= 1000000 ) 
	 { 
	 profit = profit6 + ( i - 600000 ) * 0.015;//低於10萬元的部分按10%提成+高於10萬元的部分，可提成7.5%+高於20萬元的部分，可提成5%+高於40萬元的部分，可提成3%+高於60萬元的部分，可提成1.5%。 
	 printf ( "應發放獎金總數：profit=%lf ",profit);
	 } 
	 else if ( i > 1000000 ) 
	 { 
	 profit = profit10 + ( i - 1000000 ) * 0.01;//低於10萬元的部分按10%提成+高於10萬元的部分，可提成7.5%+高於20萬元的部分，可提成5%+高於40萬元的部分，可提成3%+高於60萬元的部分，可提成1.5%+高於100萬元時，超過100萬元的部分按1%提成。 
     printf ( "應發放獎金總數：profit=%lf ",profit);
	 } 
		system("pause");//暫停視窗 
    	return 0; //回傳值為0 
 }
