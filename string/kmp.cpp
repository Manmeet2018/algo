t e m p l a t e   < t y p e n a m e   T >  
 v e c t o r < i n t >   k m p _ t a b l e ( i n t   n ,   c o n s t   T   & s )   {  
     v e c t o r < i n t >   p ( n ,   0 ) ;  
     i n t   k   =   0 ;  
     f o r   ( i n t   i   =   1 ;   i   <   n ;   i + + )   {  
         w h i l e   ( k   >   0   & &   ! ( s [ i ]   = =   s [ k ] ) )   {  
             k   =   p [ k   -   1 ] ;  
         }  
         i f   ( s [ i ]   = =   s [ k ] )   {  
             k + + ;  
         }  
         p [ i ]   =   k ;  
     }  
     r e t u r n   p ;  
 }  
  
 t e m p l a t e   < t y p e n a m e   T >  
 v e c t o r < i n t >   k m p _ t a b l e ( c o n s t   T   & s )   {  
     r e t u r n   k m p _ t a b l e ( ( i n t )   s . s i z e ( ) ,   s ) ;  
 }  
  
 t e m p l a t e   < t y p e n a m e   T >  
 v e c t o r < i n t >   k m p _ s e a r c h ( i n t   n ,   c o n s t   T   & s ,   i n t   m ,   c o n s t   T   & w ,   c o n s t   v e c t o r < i n t >   & p )   {  
     a s s e r t ( n   > =   1   & &   ( i n t )   p . s i z e ( )   = =   n ) ;  
     v e c t o r < i n t >   r e s ;  
     i n t   k   =   0 ;  
     f o r   ( i n t   i   =   0 ;   i   <   m ;   i + + )   {  
         w h i l e   ( k   >   0   & &   ( k   = =   n   | |   ! ( w [ i ]   = =   s [ k ] ) ) )   {  
             k   =   p [ k   -   1 ] ;  
         }  
         i f   ( w [ i ]   = =   s [ k ] )   {  
             k + + ;  
         }  
         i f   ( k   = =   n )   {  
             r e s . p u s h _ b a c k ( i   -   n   +   1 ) ;  
         }  
     }  
     r e t u r n   r e s ;  
     / /   r e t u r n s   0 - i n d e x e d   p o s i t i o n s   o f   o c c u r r e n c e s   o f   w   i n   s  
 }  
  
 t e m p l a t e   < t y p e n a m e   T >  
 v e c t o r < i n t >   k m p _ s e a r c h ( c o n s t   T   & s ,   c o n s t   T   & w ,   c o n s t   v e c t o r < i n t >   & p )   {  
     r e t u r n   k m p _ s e a r c h ( ( i n t )   s . s i z e ( ) ,   s ,   ( i n t )   w . s i z e ( ) ,   w ,   p ) ;  
 } 