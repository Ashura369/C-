/* learning BITWISE OPERATOR */
/*
3 types :--
    1. bitwise complement (~)
            it means value of 0 will be 1 or value of 1 will be 0
                eg-- ~ 0=1
                eg-- ~ 1=0
                eg-- ~ 1000 = 0111
    2. left shift (<<)
            if there is a binary value, its value will be shifted to left by 1 position
            here one more thing we needd to remember is that, when we use left shift, whatever the value of original binary was (suppose 5) it will be multiplied by 2 (5*2 = 10)
            eg-- 0101 << 1 = 1010
                --> value of 0101 is 5 and the value of the ans 1010 is 10 (5*2 = 10)
    3. right shift (>>)
            if there is a binary value, its value will be shifted to right by 1 position
            here one more thing we needd to remember is that, when we use right shift, whatever the value of original binary was (suppose 10) it will be devided by 2 (510/2 = 5)
            eg-- 1010 >> 1 = 0101
                --> --> value of 1010 is 10 and the value of the ans 0101 is 5 (10/2 = 5)


there are 3 other types of operators : --
    1. bitwise OR (|)
            1 | 1 = 1 (TRUE)
            1 | 0 = 1 (TRUE)
            0 | 1 = 1 (TRUE)
            0 | 0 = 0 (FALSE)
    2. bitwise AND (&)
            1 & 1 = 1 (TRUE)
            1 & 0 = 0 (FALSE)
            0 & 1 = 0 (FALSE)
            0 & 0 = 0 (FALSE)
    3. bitwise exclusive OR (^)
            1 ^ 1 = 0 (FALSE) 
            0 ^ 0 = 0 (FALSE)
            1 ^ 0 = 1 (TRUE) 
            0 ^ 1 = 1 (TRUE) 

there are some miscellineous operators too : --
        1. size of operator
        2. condition ? expression1 : expression2 [this is same as "bool operator"]
        3. comma operator 
                suppose int a = 4, 5, 6;
                here the programme will automatically take the value of a as 6 (bcoz it is the last digit) and will ignore the other values.
        4. dot and arrow operators
        5. casting operators
                converting float into int variable or char variable etc. 
                eg --> float a = 3.44
                        int (a) = 3 
                Here float value got converted into int value
        6. & address operators
                suppose int a. if we write cout<<& a; it will will print the memory adress or file path of "a"
        7. * pointer operators
                suppose if we write p = *a, it means p is pointing to variable a

unary operators : --
        1. unary plus (+) [bascially its a positive integer]
        2. unary minus (-) [bascially its a negative integer]
        3. incerament operator (++)
                a. a++ (post increament)
                b. ++a (pre incrfeament)
        4. decreament operator (--)
                a. a-- (post decreament)
                b. --a (pre decreament)
        5. logical complement operator (!)
                eg -- ! true = false
                      ! 1 = 0
                      ! 100 = 0


[[[[  THERE IS ANOTHER THING I HAVENT WROTE HERE ie OPERATOR PRECEDENCE, do read it from MS WARD ]]]]


****converting from Binary to Decimal****

GO TO THIS LINK --> https://youtu.be/QAemAVPZKKc?si=Kz-0AOklieYZL2nH

1000 is binary form --> its decimal form is 8

process (1000) to (8) --> 1*2 ki power 3 + 0*2 ki power 2 + 0*2 ki power 1 + 0*2 ki power 0 = 8
process (8) to (1000) --> (((USE LCM FORMAT))) devide 8 by 2 write the remainder (might be 0 or 1), whatever ans you got devide it again by 2 and write the remainder, keep doing it till you completely devide the number and hence at the end you get 0 or 1
        -> write the whole remainnder value inversely, and you will get the binary form of 8


*/