t e m p l a t e   < t y p e n a m e   T >  
 v e c t o r < i n t >   f i n d _ m s t ( c o n s t   u n d i g r a p h < T >   & g ,   T   & a n s )   {  
     v e c t o r < i n t >   o r d e r ( g . e d g e s . s i z e ( ) ) ;  
     i o t a ( o r d e r . b e g i n ( ) ,   o r d e r . e n d ( ) ,   0 ) ;  
     s o r t ( o r d e r . b e g i n ( ) ,   o r d e r . e n d ( ) ,   [ & g ] ( i n t   a ,   i n t   b )   {  
         r e t u r n   g . e d g e s [ a ] . c o s t   <   g . e d g e s [ b ] . c o s t ;  
     } ) ;  
     d s u   d ( g . n ) ;  
     v e c t o r < i n t >   a n s _ l i s t ;  
     a n s   =   0 ;  
     f o r   ( i n t   i d   :   o r d e r )   {  
         i f   ( g . i g n o r e   ! =   n u l l p t r   & &   g . i g n o r e ( i d ) )   {  
             c o n t i n u e ;  
         }  
         a u t o   & e   =   g . e d g e s [ i d ] ;  
         i f   ( d . g e t ( e . f r o m )   ! =   d . g e t ( e . t o ) )   {  
             d . u n i t e ( e . f r o m ,   e . t o ) ;  
             a n s _ l i s t . p u s h _ b a c k ( i d ) ;  
             a n s   + =   e . c o s t ;  
         }  
     }  
     r e t u r n   a n s _ l i s t ;  
     / /   r e t u r n s   e d g e   i d s   o f   m i n i m u m   " s p a n n i n g "   f o r e s t  
 } 