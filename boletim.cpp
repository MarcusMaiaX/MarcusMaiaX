#include<stdio.h>

int main (){


   int X1,X2,X3,X4,MED1,NE,MED2;
 
   
   printf ("informe a primeira nota.");
   scanf ("%i", &X1);
   
   printf ("informe a segunda nota.");
   scanf ("%i", &X2);
   
   printf ("informe a terceira nota.");
   scanf ("%i", &X3);
   
   printf ("informe a quarta nota.");
   scanf ("%i", &X4);
   
      
       
        printf ("digite a nota do exame");
        scanf ("%i", &NE);
        
		MED1= (X1+X2+X3+X4)/4;
        MED2= (MED1+NE)/2;
        
		if (MED2 >= 5)
		printf ("Parabens!, Aprovado em Exame... Ate o Proximo ano");	
		  
		else 
		printf ("Sua media foi de: %i",MED2);
		
		  
}
    

