i n t   p r i m i t i v e ( )   {  
     i f   ( m d   < =   0 )   {  
         r e t u r n   - 1 ;  
     }  
     i f   ( m d   = =   1   | |   m d   = =   2   | |   m d   = =   4 )   {  
         r e t u r n   m d   -   1 ;  
     }  
     v e c t o r <   p a i r < i n t ,   i n t >   >   f a c t o r s   =   f a c t o r i z e ( m d ) ;  
     i f   ( f a c t o r s [ 0 ] . f i r s t   = =   2   & &   ( f a c t o r s [ 0 ] . s e c o n d   ! =   1   | |   f a c t o r s . s i z e ( )   ! =   2 ) )   {  
         r e t u r n   - 1 ;  
     }  
     i f   ( f a c t o r s [ 0 ] . f i r s t   ! =   2   & &   f a c t o r s . s i z e ( )   ! =   1 )   {  
         r e t u r n   - 1 ;  
     }  
     i n t   p h i   =   m d ;  
     f o r   ( a u t o   & d   :   f a c t o r s )   {  
         p h i   =   p h i   /   d . f i r s t   *   ( d . f i r s t   -   1 ) ;  
     }  
     f a c t o r s   =   f a c t o r i z e ( p h i ) ;  
     f o r   ( i n t   g e n   =   2 ;   g e n   <   m d ;   g e n + + )   {  
         i f   ( p o w e r ( g e n ,   p h i )   ! =   1 )   {  
             c o n t i n u e ;  
         }  
         b o o l   o k   =   t r u e ;  
         f o r   ( a u t o   & p   :   f a c t o r s )   {  
               i f   ( p o w e r ( g e n ,   p h i   /   p . f i r s t )   = =   1 )   {  
                   o k   =   f a l s e ;  
                   b r e a k ;  
               }  
           }  
         i f   ( o k )   {  
             r e t u r n   g e n ;  
         }  
     }  
     a s s e r t ( f a l s e ) ;  
     r e t u r n   - 1 ;  
 } 