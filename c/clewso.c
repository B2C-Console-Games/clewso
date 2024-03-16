/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/clewso/basic/clewso.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x56488505c3c0 ---------A   01000    DIM P(5, 9), S$(5), R$(6), X(10)
    0x56488505c420 ---------A   01010    RANDOMIZE TIMER
    0x56488505c500 ---------A   01015    CLS
    0x56488505c590 ---------A   01020    REM*****************************************************
    0x56488505c670 ---------A   01030    REM*                                                   *
    0x56488505c7a0 ---------A   01040    REM*     INSPECTOR CLEWSO                              *
    0x56488505c880 ---------A   01050    REM*     BY:RON CARLSON                                *
    0x56488505c960 ---------A   01060    REM*     FEB. 1979                                     *
    0x56488505ca40 ---------A   01070    REM*                                                   *
    0x56488505cb60 ---------A   01080    REM*****************************************************
    0x564885062bb0 ---------A   01090    FOR I = 1 TO 5
    0x564885062cf0 ---------A   01100        READ S$(I)
    0x564885062d90 ---------A   01110    NEXT I
    0x5648850631f0 ---------A   01120    DATA "BILL","MARY","PAUL","SUZY","JOHN"
    0x564885063400 ---------A   01130    FOR I = 1 TO 6
    0x564885063540 ---------A   01140        READ R$(I)
    0x5648850635e0 ---------A   01150    NEXT I
    0x564885063c60 ---------A   01160    DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"
    0x564885063df0 ---------A T 01170    PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    0x564885063f80 ---------A   01180    PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    0x564885064120 ---------A   01190    PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    0x5648850642c0 ---------A   01200    PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    0x564885064400 ---------A   01210    PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    0x564885064570 ---------A   01220    PRINT "SOME OF THE TIME."
    0x564885064710 ---------A   01230    PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    0x564885064890 ---------A   01240    PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    0x5648850649d0 ---------A   01250    PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    0x564885064a40 ---------A   01260    PRINT
    0x564885064c30 ---------A   01270    H = 0
    0x564885064e20 ---------A   01280    C = 0
    0x564885065030 ---------A   01290    C1 = 0
    0x564885065190 ---------A   01300    PRINT "   !-----------------------------!"
    0x5648850652f0 ---------A   01310    PRINT "   !         !         O GARAGE  !"
    0x564885065660 ---------A   01320    PRINT "   !         O TROPHY  !         !"
    0x5648850657d0 ---------A   01330    PRINT "   ! DINING  !---!--  -!  --     !"
    0x564885065940 ---------A   01340    PRINT "   !                       !-----! NO WINDOWS"
    0x564885065aa0 ---------A   01350    PRINT "   !--O----------!        -!     !"
    0x564885065c00 ---------A   01360    PRINT "   !                             !---"
    0x564885065d60 ---------A   01370    PRINT "   !             !--  -------       !"
    0x564885065ec0 ---------A   01380    PRINT "   ! LIVING   ---!         !        !"
    0x564885066020 ---------A   01390    PRINT "   !--        !            O LOUNGE !"
    0x564885066180 ---------A   01400    PRINT "     !        0  ATRIUM    !    ----!"
    0x5648850662c0 ---------A   01410    PRINT "     !--------!------------!----!"
    0x564885066560 ---------A   01420    FOR K = 1 TO 5
    0x564885066b20 ---------A   01430    P(K, 1) = INT(6 * RND(K)) + 1
    0x564885066bd0 ---------A   01440    NEXT K
    0x564885066e70 ---------A   01450    FOR L = 2 TO 9
    0x5648850670a0 ---------A   01460    FOR K = 1 TO 5
    0x5648850674f0 ---------A T 01470    A = INT(6 * RND(K)) + 1
    0x564885067800 ---------A   01480    IF A = P(K, L - 1) THEN 1470
    0x564885067a00 ---------A   01490    P(K, L) = A
    0x564885067ab0 ---------A   01500    NEXT K
    0x564885067b70 ---------A   01510    NEXT L
    0x564885067c20 ---------A   01520    REM ESTABLISHED SUSPECT'S MOVEMENTS
    0x564885067ce0 ---------A   01530    REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    0x564885068180 ---------A   01540    M = INT(5 * RND(1)) + 1
    0x5648850685f0 ---------A   01550    T = INT(9 * RND(2)) + 1
    0x5648850688b0 ---------A   01560    R = P(M, T)
    0x564885068a80 ---------A T 01570    INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    0x564885068de0 ---------A   01585    IF LEFT$(S1$, 1) = "Q" THEN 2980
    0x564885069090 ---------A   01590    FOR S = 1 TO 5
    0x564885069270 ---------A   01600        IF S1$ = S$(S) THEN 1630
    0x564885069330 ---------A   01610    NEXT S
    0x5648850694c0 ---------A   01620    S = 0
    0x564885069670 ---------A T 01630    IF S = 0 THEN 1570
    0x564885069b30 ---------A   01640    PRINT
    0x564885069e00 ---------A T 01650    PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    0x564885069f90 ---------A   01660    PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    0x56488506a100 ---------A   01670    PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    0x56488506a260 ---------A   01680    PRINT "   3   - THE CRIME IS SOLVED ---";
    0x56488506a3b0 ---------A   01690    INPUT A1$
    0x56488506a5e0 ---------A   01700    A = VAL(A1$)
    0x56488506a650 ---------A   01710    REM A = x(1) - 48
    0x56488506a830 ---------A   01720    IF A < 1 THEN 1650
    0x56488506a9f0 ---------A   01730    IF A > 3 THEN 1650
    0x56488506ac20 ---------A   01740    C = C + 1
    0x56488506aed0 ---------A   01750    ON A GOTO 1760, 2120, 2380
    0x56488506afd0 ---------A T 01760    PRINT S1$;
    0x56488506b040 ---------A   01770    REM TIME SECTION
    0x56488506b1d0 ---------A   01780    PRINT " WHERE WERE YOU AT (1-9) ";
    0x56488506b320 ---------A   01790    INPUT T1$
    0x56488506b550 ---------A   01800    T1 = VAL(T1$)
    0x56488506b5c0 ---------A   01810    REM T1 = X(1) - 48
    0x56488506b7a0 ---------A   01820    IF T1 < 1 THEN 1760
    0x56488506b960 ---------A   01830    IF T1 > 9 THEN 1760
    0x56488506bbf0 ---------A   01840    R1 = P(S, T1)
    0x56488506bd70 ---------A   01850    IF S <> M THEN 1940
    0x56488506bdf0 ---------A   01860    REM LIAR SECTION
    0x56488506c070 ---------A   01870    IF RND(2) < .5 THEN 2020
    0x56488506c480 ---------A   01880    R1 = INT(6 * RND(3)) + 1
    0x56488506c6f0 ---------A   01890    IF RND(4) < .5 THEN 1920
    0x56488506c840 ---------A   01900    PRINT "THE HOST WAS ALREADY DEAD."
    0x56488506c8d0 ---------A   01910    GOTO 2020
    0x56488506ca00 ---------A T 01920    PRINT "OUR HOST WAS STILL ALIVE."
    0x56488506ca80 ---------A   01930    GOTO 2020
    0x56488506cbe0 ---------A T 01940    IF R1 = R THEN 1960
    0x56488506cc70 ---------A   01950    GOTO 2020
    0x56488506cec0 ---------A T 01960    IF RND(5) < .5 THEN 2020
    0x56488506d060 ---------A   01970    IF T1 >= T THEN 2000
    0x56488506d1b0 ---------A   01980    PRINT " THE HOST WAS STILL ALIVE."
    0x56488506d230 ---------A   01990    GOTO 2020
    0x56488506d3b0 ---------A T 02000    IF T1 <= T THEN 2020
    0x56488506d520 ---------A   02010    PRINT " THE HOST WAS ALREADY DEAD."
    0x56488506d810 ---------A T 02020    PRINT "I WAS IN THE "; R$(R1); " ROOM."
    0x56488506da30 ---------A   02030    FOR K = 1 TO 5
    0x56488506dbc0 ---------A   02040    IF K = S THEN 2090
    0x56488506de10 ---------A   02050    IF P(K, T1) <> R1 THEN 2070
    0x56488506e050 ---------A   02060    PRINT "I WAS WITH "; S$(K)
    0x56488506e450 ---------A T 02070    IF ABS(R1 - P(K, T1)) <> 1 THEN 2090
    0x56488506e670 ---------A   02080    PRINT "I SAW "; S$(K)
    0x56488506e720 ---------A T 02090    NEXT K
    0x56488506e7b0 ---------A   02100    GOTO 1570
    0x56488506e810 ---------A   02110    REM ROOM QUESTIONING
    0x56488506e930 ---------A T 02120    PRINT S1$;
    0x56488506ea90 ---------A   02130    PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    0x56488506ebe0 ---------A   02140    INPUT R1$
    0x56488506ee10 ---------A   02150    FOR T1 = 1 TO 6
    0x56488506eff0 ---------A   02160        IF R1$ = R$(T1) THEN 2190
    0x56488506f0b0 ---------A   02170    NEXT T1
    0x56488506f140 ---------A   02180    GOTO 2120
    0x56488506f2b0 ---------A T 02190    IF S <> M THEN 2280
    0x56488506f520 ---------A   02200    IF RND(5) < .5 THEN 2230
    0x56488506f920 ---------A   02210    T1 = INT(RND(5) * 9) + 1
    0x56488506f9a0 ---------A   02220    GOTO 2260
    0x56488506fb10 ---------A T 02230    IF T1 <> T THEN 2260
    0x56488506fc60 ---------A   02240    PRINT "I WAS NOT IN THAT ROOM."
    0x56488506fcf0 ---------A   02250    GOTO 1570
    0x56488506fea0 ---------A T 02260    PRINT "I WAS IN THAT ROOM AT "; T1
    0x56488506ff10 ---------A   02270    GOTO 1570
    0x564885070880 ---------A T 02280    K = 0
    0x564885070b20 ---------A   02290    FOR B = 1 TO 9
    0x564885070d80 ---------A   02300    IF P(S, B) <> T1 THEN 2330
    0x564885070f50 ---------A   02310    PRINT "I WAS IN THAT ROOM AT "; B
    0x5648850710c0 ---------A   02320    K = 1
    0x564885071170 ---------A T 02330    NEXT B
    0x564885071350 ---------A   02340    IF K = 1 THEN 1570
    0x5648850714a0 ---------A   02350    PRINT "I WAS NOT IN THAT ROOM."
    0x564885071520 ---------A   02360    GOTO 1570
    0x564885071590 ---------A   02370    REM COMFRONTATION SECTION
    0x5648850717c0 ---------A T 02380    C1 = C1 + 1
    0x564885071910 ---------A T 02390    PRINT "INSPECTOR DO YOU KNOW :"
    0x564885071a50 ---------A   02400    PRINT "  1   KILLER"
    0x564885071b90 ---------A   02410    PRINT "  2   ROOM"
    0x564885071ce0 ---------A   02420    PRINT "  3   TIME"
    0x564885071e40 ---------A   02430    PRINT "  4   TOTALLY BAFFLED ---";
    0x564885071f10 ---------A   02440    INPUT A1$
    0x5648850720c0 ---------A   02450    A = VAL(A1$)
    0x564885072250 ---------A   02470    IF A <= 0 GOTO 2390
    0x564885072420 ---------A   02480    IF A > 4 GOTO 2390
    0x5648850727d0 ---------A   02490    ON A GOTO 2500, 2730, 2620, 2900
    0x564885072920 ---------A T 02500    PRINT " THE KILLER IS  ";
    0x5648850729f0 ---------A   02510    INPUT S1$
    0x564885072ca0 ---------A   02520    FOR X = 1 TO 5
    0x564885072e80 ---------A   02530        IF S1$ = S$(X) THEN 2560
    0x564885072f40 ---------A   02540    NEXT X
    0x5648850730d0 ---------A   02550    X = 0
    0x564885073290 ---------A T 02560    IF X = 0 THEN 2390
    0x564885073490 ---------A   02570    IF S1$ <> S$(M) THEN 2880
    0x5648850735f0 ---------A   02580    PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    0x564885073810 ---------A   02590    H = H + 1
    0x5648850739c0 ---------A   02600    IF H = 3 THEN 2850
    0x564885073a50 ---------A   02610    GOTO 1570
    0x564885073b90 ---------A T 02620    PRINT "TIME OF THE MURDER ";
    0x564885073c60 ---------A   02630    INPUT T1$
    0x564885073e10 ---------A   02640    T1 = VAL(T1$)
    0x564885073fd0 ---------A   02660    IF T1 < 1 THEN 2620
    0x5648850741a0 ---------A   02670    IF T1 > 9 THEN 2620
    0x564885074340 ---------A   02680    IF T1 <> T THEN 2880
    0x564885074490 ---------A   02690    PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    0x5648850746b0 ---------A   02700    H = H + 1
    0x564885074860 ---------A   02710    IF H = 3 THEN 2850
    0x5648850748f0 ---------A   02720    GOTO 1570
    0x564885074a30 ---------A T 02730    PRINT "ROOM OF THE MURDER ";
    0x564885074b00 ---------A   02740    INPUT R1$
    0x564885074d30 ---------A   02750    FOR X = 1 TO 6
    0x564885074f10 ---------A   02760        IF R1$ = R$(X) THEN 2790
    0x564885074fd0 ---------A   02770    NEXT X
    0x564885075160 ---------A   02780    X = 0
    0x564885075320 ---------A T 02790    IF X = 0 THEN 2730
    0x564885075520 ---------A   02800    IF R1$ <> R$(R) THEN 2880
    0x564885075670 ---------A   02810    PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    0x564885075890 ---------A   02820    H = H + 1
    0x564885075a50 ---------A   02830    IF H <> 3 THEN 1570
    0x564885075ad0 ---------A   02840    REM CONFIRMATIONS
    0x564885075c80 ---------A T 02850    PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    0x564885076070 ---------A   02860    PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    0x564885076110 ---------A   02870    GOTO 2940
    0x564885076250 ---------A T 02880    PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    0x5648850762e0 ---------A   02890    GOTO 1570
    0x564885076420 ---------A T 02900    PRINT "TOO BAD INSPECTOR CLEW-SO"
    0x564885076580 ---------A   02910    PRINT " THE FACTS ARE:"
    0x564885076920 ---------A   02920    PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    0x564885076b50 ---------A   02930    PRINT R$(R); " (ROOM)"
    0x564885076cb0 ---------A T 02940    PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    0x564885076e10 ---------A   02950    INPUT A$
    0x564885077000 ---------A   02960    IF A$ = "YES" THEN 1170
    0x5648850771e0 ---------A   02970    IF A$ = "Y" THEN 1170
    0x564885077240 ---------A T 02980    END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01170      02960T, 02970T
     01470      01480T
     01570      01630T, 02100T, 02250T, 02270T, 02340T, 02360T, 02610T, 02720T, 
                02830T, 02890T
     01630      01600T
     01650      01720T, 01730T
     01760      01750T, 01820T, 01830T
     01920      01890T
     01940      01850T
     01960      01940T
     02000      01970T
     02020      01870T, 01910T, 01930T, 01950T, 01960T, 01990T, 02000T
     02070      02050T
     02090      02040T, 02070T
     02120      01750T, 02180T
     02190      02160T
     02230      02200T
     02260      02220T, 02230T
     02280      02190T
     02330      02300T
     02380      01750T
     02390      02470T, 02480T, 02560T
     02500      02490T
     02560      02530T
     02620      02490T, 02660T, 02670T
     02730      02490T, 02790T
     02790      02760T
     02850      02600T, 02710T
     02880      02570T, 02680T, 02800T
     02900      02490T
     02940      02870T
     02980      01585T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x56488505c3c0   0x56488505c3c0   0x564885077240   0x564885077240 


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02980 - 10000    7030 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/clewso/basic/clewso.bas'
 *
    A              Integer 
    A$             String  
    A1$            String  
    ABS   Function Integer     args=1, int   
    B              Integer 
    C              Integer 
    C1             Integer 
    H              Integer 
    I              Integer 
    INT   Function Integer     args=1, float 
    K              Integer 
    L              Integer 
    LEFT$ Function String      args=2, char* int   
    M              Integer 
    P     Array    Integer     {0,6} {0,10} 
    R              Integer 
    R$    Array    String      {0,7} 
    R1             Integer 
    R1$            String  
    RND   Function Integer     args=1, int   
    S              Integer 
    S$    Array    String      {0,6} 
    S1$            String  
    T              Integer 
    T1             Integer 
    T1$            String  
    VAL   Function Integer     args=1, char* 
    X     Array    Integer     {0,11} 
    X              Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/clewso/basic/clewso.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x56488505c3c0 ---------A   01000    DIM P(5, 9), S$(5), R$(6), X(10)
    0x56488505c420 ---------A   01010    RANDOMIZE TIMER
    0x56488505c500 ---------A   01020    CLS
    0x56488505c590 ---------A   01030    REM*****************************************************
    0x56488505c670 ---------A   01040    REM*                                                   *
    0x56488505c7a0 ---------A   01050    REM*     INSPECTOR CLEWSO                              *
    0x56488505c880 ---------A   01060    REM*     BY:RON CARLSON                                *
    0x56488505c960 ---------A   01070    REM*     FEB. 1979                                     *
    0x56488505ca40 ---------A   01080    REM*                                                   *
    0x56488505cb60 ---------A   01090    REM*****************************************************
    0x564885062bb0 ---------A   01100    FOR I = 1 TO 5
    0x564885062cf0 ---------A   01110        READ S$(I)
    0x564885062d90 ---------A   01120    NEXT I
    0x5648850631f0 ---------A   01130    DATA "BILL","MARY","PAUL","SUZY","JOHN"
    0x564885063400 ---------A   01140    FOR I = 1 TO 6
    0x564885063540 ---------A   01150        READ R$(I)
    0x5648850635e0 ---------A   01160    NEXT I
    0x564885063c60 ---------A   01170    DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"
    0x564885063df0 ---------A T 01180    PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    0x564885063f80 ---------A   01190    PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    0x564885064120 ---------A   01200    PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    0x5648850642c0 ---------A   01210    PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    0x564885064400 ---------A   01220    PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    0x564885064570 ---------A   01230    PRINT "SOME OF THE TIME."
    0x564885064710 ---------A   01240    PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    0x564885064890 ---------A   01250    PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    0x5648850649d0 ---------A   01260    PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    0x564885064a40 ---------A   01270    PRINT
    0x564885064c30 ---------A   01280    H = 0
    0x564885064e20 ---------A   01290    C = 0
    0x564885065030 ---------A   01300    C1 = 0
    0x564885065190 ---------A   01310    PRINT "   !-----------------------------!"
    0x5648850652f0 ---------A   01320    PRINT "   !         !         O GARAGE  !"
    0x564885065660 ---------A   01330    PRINT "   !         O TROPHY  !         !"
    0x5648850657d0 ---------A   01340    PRINT "   ! DINING  !---!--  -!  --     !"
    0x564885065940 ---------A   01350    PRINT "   !                       !-----! NO WINDOWS"
    0x564885065aa0 ---------A   01360    PRINT "   !--O----------!        -!     !"
    0x564885065c00 ---------A   01370    PRINT "   !                             !---"
    0x564885065d60 ---------A   01380    PRINT "   !             !--  -------       !"
    0x564885065ec0 ---------A   01390    PRINT "   ! LIVING   ---!         !        !"
    0x564885066020 ---------A   01400    PRINT "   !--        !            O LOUNGE !"
    0x564885066180 ---------A   01410    PRINT "     !        0  ATRIUM    !    ----!"
    0x5648850662c0 ---------A   01420    PRINT "     !--------!------------!----!"
    0x564885066560 ---------A   01430    FOR K = 1 TO 5
    0x564885066b20 ---------A   01440    P(K, 1) = INT(6 * RND(K)) + 1
    0x564885066bd0 ---------A   01450    NEXT K
    0x564885066e70 ---------A   01460    FOR L = 2 TO 9
    0x5648850670a0 ---------A   01470    FOR K = 1 TO 5
    0x5648850674f0 ---------A T 01480    A = INT(6 * RND(K)) + 1
    0x564885067800 ---------A   01490    IF A = P(K, L - 1) THEN 1480
    0x564885067a00 ---------A   01500    P(K, L) = A
    0x564885067ab0 ---------A   01510    NEXT K
    0x564885067b70 ---------A   01520    NEXT L
    0x564885067c20 ---------A   01530    REM ESTABLISHED SUSPECT'S MOVEMENTS
    0x564885067ce0 ---------A   01540    REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    0x564885068180 ---------A   01550    M = INT(5 * RND(1)) + 1
    0x5648850685f0 ---------A   01560    T = INT(9 * RND(2)) + 1
    0x5648850688b0 ---------A   01570    R = P(M, T)
    0x564885068a80 ---------A T 01580    INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    0x564885068de0 ---------A   01590    IF LEFT$(S1$, 1) = "Q" THEN 2970
    0x564885069090 ---------A   01600    FOR S = 1 TO 5
    0x564885069270 ---------A   01610        IF S1$ = S$(S) THEN 1640
    0x564885069330 ---------A   01620    NEXT S
    0x5648850694c0 ---------A   01630    S = 0
    0x564885069670 ---------A T 01640    IF S = 0 THEN 1580
    0x564885069b30 ---------A   01650    PRINT
    0x564885069e00 ---------A T 01660    PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    0x564885069f90 ---------A   01670    PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    0x56488506a100 ---------A   01680    PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    0x56488506a260 ---------A   01690    PRINT "   3   - THE CRIME IS SOLVED ---";
    0x56488506a3b0 ---------A   01700    INPUT A1$
    0x56488506a5e0 ---------A   01710    A = VAL(A1$)
    0x56488506a650 ---------A   01720    REM A = x(1) - 48
    0x56488506a830 ---------A   01730    IF A < 1 THEN 1660
    0x56488506a9f0 ---------A   01740    IF A > 3 THEN 1660
    0x56488506ac20 ---------A   01750    C = C + 1
    0x56488506aed0 ---------A   01760    ON A GOTO 1770, 2130, 2390
    0x56488506afd0 ---------A T 01770    PRINT S1$;
    0x56488506b040 ---------A   01780    REM TIME SECTION
    0x56488506b1d0 ---------A   01790    PRINT " WHERE WERE YOU AT (1-9) ";
    0x56488506b320 ---------A   01800    INPUT T1$
    0x56488506b550 ---------A   01810    T1 = VAL(T1$)
    0x56488506b5c0 ---------A   01820    REM T1 = X(1) - 48
    0x56488506b7a0 ---------A   01830    IF T1 < 1 THEN 1770
    0x56488506b960 ---------A   01840    IF T1 > 9 THEN 1770
    0x56488506bbf0 ---------A   01850    R1 = P(S, T1)
    0x56488506bd70 ---------A   01860    IF S <> M THEN 1950
    0x56488506bdf0 ---------A   01870    REM LIAR SECTION
    0x56488506c070 ---------A   01880    IF RND(2) < .5 THEN 2030
    0x56488506c480 ---------A   01890    R1 = INT(6 * RND(3)) + 1
    0x56488506c6f0 ---------A   01900    IF RND(4) < .5 THEN 1930
    0x56488506c840 ---------A   01910    PRINT "THE HOST WAS ALREADY DEAD."
    0x56488506c8d0 ---------A   01920    GOTO 2030
    0x56488506ca00 ---------A T 01930    PRINT "OUR HOST WAS STILL ALIVE."
    0x56488506ca80 ---------A   01940    GOTO 2030
    0x56488506cbe0 ---------A T 01950    IF R1 = R THEN 1970
    0x56488506cc70 ---------A   01960    GOTO 2030
    0x56488506cec0 ---------A T 01970    IF RND(5) < .5 THEN 2030
    0x56488506d060 ---------A   01980    IF T1 >= T THEN 2010
    0x56488506d1b0 ---------A   01990    PRINT " THE HOST WAS STILL ALIVE."
    0x56488506d230 ---------A   02000    GOTO 2030
    0x56488506d3b0 ---------A T 02010    IF T1 <= T THEN 2030
    0x56488506d520 ---------A   02020    PRINT " THE HOST WAS ALREADY DEAD."
    0x56488506d810 ---------A T 02030    PRINT "I WAS IN THE "; R$(R1); " ROOM."
    0x56488506da30 ---------A   02040    FOR K = 1 TO 5
    0x56488506dbc0 ---------A   02050    IF K = S THEN 2100
    0x56488506de10 ---------A   02060    IF P(K, T1) <> R1 THEN 2080
    0x56488506e050 ---------A   02070    PRINT "I WAS WITH "; S$(K)
    0x56488506e450 ---------A T 02080    IF ABS(R1 - P(K, T1)) <> 1 THEN 2100
    0x56488506e670 ---------A   02090    PRINT "I SAW "; S$(K)
    0x56488506e720 ---------A T 02100    NEXT K
    0x56488506e7b0 ---------A   02110    GOTO 1580
    0x56488506e810 ---------A   02120    REM ROOM QUESTIONING
    0x56488506e930 ---------A T 02130    PRINT S1$;
    0x56488506ea90 ---------A   02140    PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    0x56488506ebe0 ---------A   02150    INPUT R1$
    0x56488506ee10 ---------A   02160    FOR T1 = 1 TO 6
    0x56488506eff0 ---------A   02170        IF R1$ = R$(T1) THEN 2200
    0x56488506f0b0 ---------A   02180    NEXT T1
    0x56488506f140 ---------A   02190    GOTO 2130
    0x56488506f2b0 ---------A T 02200    IF S <> M THEN 2290
    0x56488506f520 ---------A   02210    IF RND(5) < .5 THEN 2240
    0x56488506f920 ---------A   02220    T1 = INT(RND(5) * 9) + 1
    0x56488506f9a0 ---------A   02230    GOTO 2270
    0x56488506fb10 ---------A T 02240    IF T1 <> T THEN 2270
    0x56488506fc60 ---------A   02250    PRINT "I WAS NOT IN THAT ROOM."
    0x56488506fcf0 ---------A   02260    GOTO 1580
    0x56488506fea0 ---------A T 02270    PRINT "I WAS IN THAT ROOM AT "; T1
    0x56488506ff10 ---------A   02280    GOTO 1580
    0x564885070880 ---------A T 02290    K = 0
    0x564885070b20 ---------A   02300    FOR B = 1 TO 9
    0x564885070d80 ---------A   02310    IF P(S, B) <> T1 THEN 2340
    0x564885070f50 ---------A   02320    PRINT "I WAS IN THAT ROOM AT "; B
    0x5648850710c0 ---------A   02330    K = 1
    0x564885071170 ---------A T 02340    NEXT B
    0x564885071350 ---------A   02350    IF K = 1 THEN 1580
    0x5648850714a0 ---------A   02360    PRINT "I WAS NOT IN THAT ROOM."
    0x564885071520 ---------A   02370    GOTO 1580
    0x564885071590 ---------A   02380    REM COMFRONTATION SECTION
    0x5648850717c0 ---------A T 02390    C1 = C1 + 1
    0x564885071910 ---------A T 02400    PRINT "INSPECTOR DO YOU KNOW :"
    0x564885071a50 ---------A   02410    PRINT "  1   KILLER"
    0x564885071b90 ---------A   02420    PRINT "  2   ROOM"
    0x564885071ce0 ---------A   02430    PRINT "  3   TIME"
    0x564885071e40 ---------A   02440    PRINT "  4   TOTALLY BAFFLED ---";
    0x564885071f10 ---------A   02450    INPUT A1$
    0x5648850720c0 ---------A   02460    A = VAL(A1$)
    0x564885072250 ---------A   02470    IF A <= 0 GOTO 2400
    0x564885072420 ---------A   02480    IF A > 4 GOTO 2400
    0x5648850727d0 ---------A   02490    ON A GOTO 2500, 2720, 2620, 2890
    0x564885072920 ---------A T 02500    PRINT " THE KILLER IS  ";
    0x5648850729f0 ---------A   02510    INPUT S1$
    0x564885072ca0 ---------A   02520    FOR X = 1 TO 5
    0x564885072e80 ---------A   02530        IF S1$ = S$(X) THEN 2560
    0x564885072f40 ---------A   02540    NEXT X
    0x5648850730d0 ---------A   02550    X = 0
    0x564885073290 ---------A T 02560    IF X = 0 THEN 2400
    0x564885073490 ---------A   02570    IF S1$ <> S$(M) THEN 2870
    0x5648850735f0 ---------A   02580    PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    0x564885073810 ---------A   02590    H = H + 1
    0x5648850739c0 ---------A   02600    IF H = 3 THEN 2840
    0x564885073a50 ---------A   02610    GOTO 1580
    0x564885073b90 ---------A T 02620    PRINT "TIME OF THE MURDER ";
    0x564885073c60 ---------A   02630    INPUT T1$
    0x564885073e10 ---------A   02640    T1 = VAL(T1$)
    0x564885073fd0 ---------A   02650    IF T1 < 1 THEN 2620
    0x5648850741a0 ---------A   02660    IF T1 > 9 THEN 2620
    0x564885074340 ---------A   02670    IF T1 <> T THEN 2870
    0x564885074490 ---------A   02680    PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    0x5648850746b0 ---------A   02690    H = H + 1
    0x564885074860 ---------A   02700    IF H = 3 THEN 2840
    0x5648850748f0 ---------A   02710    GOTO 1580
    0x564885074a30 ---------A T 02720    PRINT "ROOM OF THE MURDER ";
    0x564885074b00 ---------A   02730    INPUT R1$
    0x564885074d30 ---------A   02740    FOR X = 1 TO 6
    0x564885074f10 ---------A   02750        IF R1$ = R$(X) THEN 2780
    0x564885074fd0 ---------A   02760    NEXT X
    0x564885075160 ---------A   02770    X = 0
    0x564885075320 ---------A T 02780    IF X = 0 THEN 2720
    0x564885075520 ---------A   02790    IF R1$ <> R$(R) THEN 2870
    0x564885075670 ---------A   02800    PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    0x564885075890 ---------A   02810    H = H + 1
    0x564885075a50 ---------A   02820    IF H <> 3 THEN 1580
    0x564885075ad0 ---------A   02830    REM CONFIRMATIONS
    0x564885075c80 ---------A T 02840    PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    0x564885076070 ---------A   02850    PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    0x564885076110 ---------A   02860    GOTO 2930
    0x564885076250 ---------A T 02870    PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    0x5648850762e0 ---------A   02880    GOTO 1580
    0x564885076420 ---------A T 02890    PRINT "TOO BAD INSPECTOR CLEW-SO"
    0x564885076580 ---------A   02900    PRINT " THE FACTS ARE:"
    0x564885076920 ---------A   02910    PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    0x564885076b50 ---------A   02920    PRINT R$(R); " (ROOM)"
    0x564885076cb0 ---------A T 02930    PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    0x564885076e10 ---------A   02940    INPUT A$
    0x564885077000 ---------A   02950    IF A$ = "YES" THEN 1180
    0x5648850771e0 ---------A   02960    IF A$ = "Y" THEN 1180
    0x564885077240 ---------A T 02970    END
 */

//---------------------------------------------------------------------------
// $Header$ 
//
// NOTE: This program has been automatically tranlated by b2c
//
// $Log$ 
// 
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
char* data_01130s[]={"BILL","MARY","PAUL","SUZY","JOHN"};
char* data_01170s[]={"LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1130,  5,data_01130s},
    { 1170,  6,data_01170s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int   iAnswer;      // Comments?
char* s1Answer;     // Comments?
char* s2Answer;     // Comments?
int   B_int;        // Comments?
int   ClewsoQuestionCnt;// Comments?
int   ClewsoConfrontCnt;// Comments?
int   TallyInfoCorrect; // Comments?
int   idx1;         // Comments?
int   Person;       // Comments?
int   Time;         // Comments?
int   Killer;       // Comments?
int   SuspectMovement[6][10];   // Comments?
int   RoomOfMurder; // Comments?
char* RoomNames[7]; // Comments?
int   SuspectLocationAtHour;// Comments?
char* RoomName;     // Comments?
int   Suspect;      // Comments?
char* NPCNames[6];  // Comments?
char* SuspectName;  // Comments?
int   TimeOfMurder; // Comments?
int   idx2;         // Comments?
char* TimeAnswer;   // Comments?
int   X_int_arr[11];// Comments?
int   SuspectOrRoomIdx; // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000    DIM P(5, 9), S$(5), R$(6), X(10)
    // 01010    RANDOMIZE TIMER
    RANDOMIZE(false);
    // 01020    CLS
    ClearScreen(0);
    // 01030    REM*****************************************************
    // 01040    REM*                                                   *
    // 01050    REM*     INSPECTOR CLEWSO                              *
    // 01060    REM*     BY:RON CARLSON                                *
    // 01070    REM*     FEB. 1979                                     *
    // 01080    REM*                                                   *
    // 01090    REM*****************************************************
    // 01100    FOR I = 1 TO 5
    for(idx1=1;idx1<=5;idx1++){
        // 01110        READ S$(I)
        NPCNames[(int)idx1] = Get_Data_String();
        // 01120    NEXT I
        int dummy_1120=0; // Ignore this line.
    }; // End-For(idx1)
    // 01130    DATA "BILL","MARY","PAUL","SUZY","JOHN"
    // 01140    FOR I = 1 TO 6
    for(idx1=1;idx1<=6;idx1++){
        // 01150        READ R$(I)
        RoomNames[(int)idx1] = Get_Data_String();
        // 01160    NEXT I
        int dummy_1160=0; // Ignore this line.
    }; // End-For(idx1)
    // 01170    DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"

  StartGame:
    // 01180    PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    b2c_fprintf(stdout,"BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "); b2c_fprintf(stdout,"\n");
    // 01190    PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    b2c_fprintf(stdout,"WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."); b2c_fprintf(stdout,"\n");
    // 01200    PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    b2c_fprintf(stdout,"YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"); b2c_fprintf(stdout,"\n");
    // 01210    PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    b2c_fprintf(stdout,"ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"); b2c_fprintf(stdout,"\n");
    // 01220    PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    b2c_fprintf(stdout,"FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"); b2c_fprintf(stdout,"\n");
    // 01230    PRINT "SOME OF THE TIME."
    b2c_fprintf(stdout,"SOME OF THE TIME."); b2c_fprintf(stdout,"\n");
    // 01240    PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    b2c_fprintf(stdout,"IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"); b2c_fprintf(stdout,"\n");
    // 01250    PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    b2c_fprintf(stdout,"OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "); b2c_fprintf(stdout,"\n");
    // 01260    PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    b2c_fprintf(stdout,"ROOM WHERE THE MURDER TOOK PLACE."); b2c_fprintf(stdout,"\n");
    // 01270    PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01280    H = 0
    TallyInfoCorrect = 0;
    // 01290    C = 0
    ClewsoQuestionCnt = 0;
    // 01300    C1 = 0
    ClewsoConfrontCnt = 0;
    // 01310    PRINT "   !-----------------------------!"
    b2c_fprintf(stdout,"   !-----------------------------!"); b2c_fprintf(stdout,"\n");
    // 01320    PRINT "   !         !         O GARAGE  !"
    b2c_fprintf(stdout,"   !         !         O GARAGE  !"); b2c_fprintf(stdout,"\n");
    // 01330    PRINT "   !         O TROPHY  !         !"
    b2c_fprintf(stdout,"   !         O TROPHY  !         !"); b2c_fprintf(stdout,"\n");
    // 01340    PRINT "   ! DINING  !---!--  -!  --     !"
    b2c_fprintf(stdout,"   ! DINING  !---!--  -!  --     !"); b2c_fprintf(stdout,"\n");
    // 01350    PRINT "   !                       !-----! NO WINDOWS"
    b2c_fprintf(stdout,"   !                       !-----! NO WINDOWS"); b2c_fprintf(stdout,"\n");
    // 01360    PRINT "   !--O----------!        -!     !"
    b2c_fprintf(stdout,"   !--O----------!        -!     !"); b2c_fprintf(stdout,"\n");
    // 01370    PRINT "   !                             !---"
    b2c_fprintf(stdout,"   !                             !---"); b2c_fprintf(stdout,"\n");
    // 01380    PRINT "   !             !--  -------       !"
    b2c_fprintf(stdout,"   !             !--  -------       !"); b2c_fprintf(stdout,"\n");
    // 01390    PRINT "   ! LIVING   ---!         !        !"
    b2c_fprintf(stdout,"   ! LIVING   ---!         !        !"); b2c_fprintf(stdout,"\n");
    // 01400    PRINT "   !--        !            O LOUNGE !"
    b2c_fprintf(stdout,"   !--        !            O LOUNGE !"); b2c_fprintf(stdout,"\n");
    // 01410    PRINT "     !        0  ATRIUM    !    ----!"
    b2c_fprintf(stdout,"     !        0  ATRIUM    !    ----!"); b2c_fprintf(stdout,"\n");
    // 01420    PRINT "     !--------!------------!----!"
    b2c_fprintf(stdout,"     !--------!------------!----!"); b2c_fprintf(stdout,"\n");
    // 01430    FOR K = 1 TO 5
    for(Person=1;Person<=5;Person++){
        // 01440    P(K, 1) = INT(6 * RND(K)) + 1
        SuspectMovement[(int)Person][(int)1] = INT(6*RND(Person))+1;
        // 01450    NEXT K
        int dummy_1450=0; // Ignore this line.
    }; // End-For(Person)
    // 01460    FOR L = 2 TO 9
    for(Time=2;Time<=9;Time++){
        // 01470    FOR K = 1 TO 5
        for(Person=1;Person<=5;Person++){

  NotPreviousRoom:
            // 01480    A = INT(6 * RND(K)) + 1
            iAnswer = INT(6*RND(Person))+1;
            // 01490    IF A = P(K, L - 1) THEN 1480
            if(iAnswer==SuspectMovement[(int)Person][(int)Time-1])goto NotPreviousRoom;
            // 01500    P(K, L) = A
            SuspectMovement[(int)Person][(int)Time] = iAnswer;
            // 01510    NEXT K
            int dummy_1510=0; // Ignore this line.
        }; // End-For(Person)
        // 01520    NEXT L
        int dummy_1520=0; // Ignore this line.
    }; // End-For(Time)
    // 01530    REM ESTABLISHED SUSPECT'S MOVEMENTS
    // 01540    REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    // 01550    M = INT(5 * RND(1)) + 1
    Killer = INT(5*RND(1))+1;
    // 01560    T = INT(9 * RND(2)) + 1
    TimeOfMurder = INT(9*RND(2))+1;
    // 01570    R = P(M, T)
    RoomOfMurder = SuspectMovement[(int)Killer][(int)TimeOfMurder];

  QClewsoSuspect:
    // 01580    INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    // Start of Basic INPUT statement 01580
    printf("INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) ");
    char inpbuf_01580[100];
    if(fgets(inpbuf_01580,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01580=strtok(inpbuf_01580," ,\t\n");
        SuspectName=strdup(inpbuf_01580);
    }; // End of Basic INPUT statement 01580
    // 01590    IF LEFT$(S1$, 1) = "Q" THEN 2970
    if(strcmp(LEFT(SuspectName,1),"Q")==0)goto QuitGame;
    // 01600    FOR S = 1 TO 5
    for(Suspect=1;Suspect<=5;Suspect++){
        // 01610        IF S1$ = S$(S) THEN 1640
        if(strcmp(SuspectName,NPCNames[(int)Suspect])==0)goto CheckRecognizeName;
        // 01620    NEXT S
        int dummy_1620=0; // Ignore this line.
    }; // End-For(Suspect)
    // 01630    S = 0
    Suspect = 0;

  CheckRecognizeName:
    // 01640    IF S = 0 THEN 1580
    if(Suspect==0)goto QClewsoSuspect;
    // 01650    PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  QSuspectWhereabouts:
    // 01660    PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    b2c_fprintf(stdout,"DO YOU WISH TO QUESTION %s ABOUT :",SuspectName); b2c_fprintf(stdout,"\n");
    // 01670    PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    b2c_fprintf(stdout,"   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"); b2c_fprintf(stdout,"\n");
    // 01680    PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    b2c_fprintf(stdout,"   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"); b2c_fprintf(stdout,"\n");
    // 01690    PRINT "   3   - THE CRIME IS SOLVED ---";
    b2c_fprintf(stdout,"   3   - THE CRIME IS SOLVED ---"); 
    // 01700    INPUT A1$
    // Start of Basic INPUT statement 01700
    printf(" ? ");
    char inpbuf_01700[100];
    if(fgets(inpbuf_01700,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01700=strtok(inpbuf_01700," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01700==nullptr){
            s2Answer = "";
        }else{
            s2Answer = ps_01700;
        };
    }; // End of Basic INPUT statement 01700
    // 01710    A = VAL(A1$)
    iAnswer = VAL(s2Answer);
    // 01720    REM A = x(1) - 48
    // 01730    IF A < 1 THEN 1660
    if(iAnswer<1)goto QSuspectWhereabouts;
    // 01740    IF A > 3 THEN 1660
    if(iAnswer>3)goto QSuspectWhereabouts;
    // 01750    C = C + 1
    ClewsoQuestionCnt = ClewsoQuestionCnt+1;
    // 01760    ON A GOTO 1770, 2130, 2390
    switch((int)(iAnswer)){
        case 1: goto QSuspectLocationAtTime;
        case 2: goto QSuspectTimeInRoom;
        case 3: goto ClewsoConfrontsSuspect;
        default: break; 
    };

  QSuspectLocationAtTime:
    // 01770    PRINT S1$;
    b2c_fprintf(stdout,"%s",SuspectName); 
    // 01780    REM TIME SECTION
    // 01790    PRINT " WHERE WERE YOU AT (1-9) ";
    b2c_fprintf(stdout," WHERE WERE YOU AT (1-9) "); 
    // 01800    INPUT T1$
    // Start of Basic INPUT statement 01800
    printf(" ? ");
    char inpbuf_01800[100];
    if(fgets(inpbuf_01800,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01800=strtok(inpbuf_01800," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01800==nullptr){
            TimeAnswer = "";
        }else{
            TimeAnswer = ps_01800;
        };
    }; // End of Basic INPUT statement 01800
    // 01810    T1 = VAL(T1$)
    idx2 = VAL(TimeAnswer);
    // 01820    REM T1 = X(1) - 48
    // 01830    IF T1 < 1 THEN 1770
    if(idx2<1)goto QSuspectLocationAtTime;
    // 01840    IF T1 > 9 THEN 1770
    if(idx2>9)goto QSuspectLocationAtTime;
    // 01850    R1 = P(S, T1)
    SuspectLocationAtHour = SuspectMovement[(int)Suspect][(int)idx2];
    // 01860    IF S <> M THEN 1950
    if(Suspect!=Killer)goto ChkSuspectInMurderRoom;
    // 01870    REM LIAR SECTION
    // 01880    IF RND(2) < .5 THEN 2030
    if(RND(2)<0.5)goto SuspectLocationAtTime;
    // 01890    R1 = INT(6 * RND(3)) + 1
    SuspectLocationAtHour = INT(6*RND(3))+1;
    // 01900    IF RND(4) < .5 THEN 1930
    if(RND(4)<0.5)goto SuspectLiesAboutTime;
    // 01910    PRINT "THE HOST WAS ALREADY DEAD."
    b2c_fprintf(stdout,"THE HOST WAS ALREADY DEAD."); b2c_fprintf(stdout,"\n");
    // 01920    GOTO 2030
    goto SuspectLocationAtTime;

  SuspectLiesAboutTime:
    // 01930    PRINT "OUR HOST WAS STILL ALIVE."
    b2c_fprintf(stdout,"OUR HOST WAS STILL ALIVE."); b2c_fprintf(stdout,"\n");
    // 01940    GOTO 2030
    goto SuspectLocationAtTime;

  ChkSuspectInMurderRoom:
    // 01950    IF R1 = R THEN 1970
    if(SuspectLocationAtHour==RoomOfMurder)goto SuspectInRoomAtTimeOfMurder;
    // 01960    GOTO 2030
    goto SuspectLocationAtTime;

  SuspectInRoomAtTimeOfMurder:
    // 01970    IF RND(5) < .5 THEN 2030
    if(RND(5)<0.5)goto SuspectLocationAtTime;
    // 01980    IF T1 >= T THEN 2010
    if(idx2>=TimeOfMurder)goto SuspectReportHostDead;
    // 01990    PRINT " THE HOST WAS STILL ALIVE."
    b2c_fprintf(stdout," THE HOST WAS STILL ALIVE."); b2c_fprintf(stdout,"\n");
    // 02000    GOTO 2030
    goto SuspectLocationAtTime;

  SuspectReportHostDead:
    // 02010    IF T1 <= T THEN 2030
    if(idx2<=TimeOfMurder)goto SuspectLocationAtTime;
    // 02020    PRINT " THE HOST WAS ALREADY DEAD."
    b2c_fprintf(stdout," THE HOST WAS ALREADY DEAD."); b2c_fprintf(stdout,"\n");

  SuspectLocationAtTime:
    // 02030    PRINT "I WAS IN THE "; R$(R1); " ROOM."
    b2c_fprintf(stdout,"I WAS IN THE %s ROOM.",RoomNames[(int)SuspectLocationAtHour]); b2c_fprintf(stdout,"\n");
    // 02040    FOR K = 1 TO 5
    for(Person=1;Person<=5;Person++){
        // 02050    IF K = S THEN 2100
        if(Person==Suspect)goto WithHimself;
        // 02060    IF P(K, T1) <> R1 THEN 2080
        if(SuspectMovement[(int)Person][(int)idx2]!=SuspectLocationAtHour)goto CheckSawWho;
        // 02070    PRINT "I WAS WITH "; S$(K)
        b2c_fprintf(stdout,"I WAS WITH %s",NPCNames[(int)Person]); b2c_fprintf(stdout,"\n");

  CheckSawWho:
        // 02080    IF ABS(R1 - P(K, T1)) <> 1 THEN 2100
        if(ABS(SuspectLocationAtHour-SuspectMovement[(int)Person][(int)idx2])!=1)goto WithHimself;
        // 02090    PRINT "I SAW "; S$(K)
        b2c_fprintf(stdout,"I SAW %s",NPCNames[(int)Person]); b2c_fprintf(stdout,"\n");

  WithHimself:
        // 02100    NEXT K
        int dummy_2100=0; // Ignore this line.
    }; // End-For(Person)
    // 02110    GOTO 1580
    goto QClewsoSuspect;
    // 02120    REM ROOM QUESTIONING

  QSuspectTimeInRoom:
    // 02130    PRINT S1$;
    b2c_fprintf(stdout,"%s",SuspectName); 
    // 02140    PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    b2c_fprintf(stdout," WHAT TIME WERE YOU IN [ROOM] "); 
    // 02150    INPUT R1$
    // Start of Basic INPUT statement 02150
    printf(" ? ");
    char inpbuf_02150[100];
    if(fgets(inpbuf_02150,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02150=strtok(inpbuf_02150," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02150==nullptr){
            RoomName = "";
        }else{
            RoomName = ps_02150;
        };
    }; // End of Basic INPUT statement 02150
    // 02160    FOR T1 = 1 TO 6
    for(idx2=1;idx2<=6;idx2++){
        // 02170        IF R1$ = R$(T1) THEN 2200
        if(strcmp(RoomName,RoomNames[(int)idx2])==0)goto GotRoomIndex;
        // 02180    NEXT T1
        int dummy_2180=0; // Ignore this line.
    }; // End-For(idx2)
    // 02190    GOTO 2130
    goto QSuspectTimeInRoom;

  GotRoomIndex:
    // 02200    IF S <> M THEN 2290
    if(Suspect!=Killer)goto SuspectReportsTimeInRoom;
    // 02210    IF RND(5) < .5 THEN 2240
    if(RND(5)<0.5)goto KillerLiesNotInRoom;
    // 02220    T1 = INT(RND(5) * 9) + 1
    idx2 = INT(RND(5)*9)+1;
    // 02230    GOTO 2270
    goto KillerReportsTimeInRoom;

  KillerLiesNotInRoom:
    // 02240    IF T1 <> T THEN 2270
    if(idx2!=TimeOfMurder)goto KillerReportsTimeInRoom;
    // 02250    PRINT "I WAS NOT IN THAT ROOM."
    b2c_fprintf(stdout,"I WAS NOT IN THAT ROOM."); b2c_fprintf(stdout,"\n");
    // 02260    GOTO 1580
    goto QClewsoSuspect;

  KillerReportsTimeInRoom:
    // 02270    PRINT "I WAS IN THAT ROOM AT "; T1
    b2c_fprintf(stdout,"I WAS IN THAT ROOM AT  %d ",idx2); b2c_fprintf(stdout,"\n");
    // 02280    GOTO 1580
    goto QClewsoSuspect;

  SuspectReportsTimeInRoom:
    // 02290    K = 0
    Person = 0;
    // 02300    FOR B = 1 TO 9
    for(B_int=1;B_int<=9;B_int++){
        // 02310    IF P(S, B) <> T1 THEN 2340
        if(SuspectMovement[(int)Suspect][(int)B_int]!=idx2)goto NotInRoomNow;
        // 02320    PRINT "I WAS IN THAT ROOM AT "; B
        b2c_fprintf(stdout,"I WAS IN THAT ROOM AT  %d ",B_int); b2c_fprintf(stdout,"\n");
        // 02330    K = 1
        Person = 1;

  NotInRoomNow:
        // 02340    NEXT B
        int dummy_2340=0; // Ignore this line.
    }; // End-For(B_int)
    // 02350    IF K = 1 THEN 1580
    if(Person==1)goto QClewsoSuspect;
    // 02360    PRINT "I WAS NOT IN THAT ROOM."
    b2c_fprintf(stdout,"I WAS NOT IN THAT ROOM."); b2c_fprintf(stdout,"\n");
    // 02370    GOTO 1580
    goto QClewsoSuspect;
    // 02380    REM COMFRONTATION SECTION

  ClewsoConfrontsSuspect:
    // 02390    C1 = C1 + 1
    ClewsoConfrontCnt = ClewsoConfrontCnt+1;

  QWhichInfo:
    // 02400    PRINT "INSPECTOR DO YOU KNOW :"
    b2c_fprintf(stdout,"INSPECTOR DO YOU KNOW :"); b2c_fprintf(stdout,"\n");
    // 02410    PRINT "  1   KILLER"
    b2c_fprintf(stdout,"  1   KILLER"); b2c_fprintf(stdout,"\n");
    // 02420    PRINT "  2   ROOM"
    b2c_fprintf(stdout,"  2   ROOM"); b2c_fprintf(stdout,"\n");
    // 02430    PRINT "  3   TIME"
    b2c_fprintf(stdout,"  3   TIME"); b2c_fprintf(stdout,"\n");
    // 02440    PRINT "  4   TOTALLY BAFFLED ---";
    b2c_fprintf(stdout,"  4   TOTALLY BAFFLED ---"); 
    // 02450    INPUT A1$
    // Start of Basic INPUT statement 02450
    printf(" ? ");
    char inpbuf_02450[100];
    if(fgets(inpbuf_02450,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02450=strtok(inpbuf_02450," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02450==nullptr){
            s2Answer = "";
        }else{
            s2Answer = ps_02450;
        };
    }; // End of Basic INPUT statement 02450
    // 02460    A = VAL(A1$)
    iAnswer = VAL(s2Answer);
    // 02470    IF A <= 0 GOTO 2400
    if(iAnswer<=0)goto QWhichInfo;
    // 02480    IF A > 4 GOTO 2400
    if(iAnswer>4)goto QWhichInfo;
    // 02490    ON A GOTO 2500, 2720, 2620, 2890
    switch((int)(iAnswer)){
        case 1: goto QSuspectName;
        case 2: goto QRoomOfMurder;
        case 3: goto QTimeOfMurder;
        case 4: goto ClewsoGivesUp;
        default: break; 
    };

  QSuspectName:
    // 02500    PRINT " THE KILLER IS  ";
    b2c_fprintf(stdout," THE KILLER IS  "); 
    // 02510    INPUT S1$
    // Start of Basic INPUT statement 02510
    printf(" ? ");
    char inpbuf_02510[100];
    if(fgets(inpbuf_02510,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02510=strtok(inpbuf_02510," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02510==nullptr){
            SuspectName = "";
        }else{
            SuspectName = ps_02510;
        };
    }; // End of Basic INPUT statement 02510
    // 02520    FOR X = 1 TO 5
    for(SuspectOrRoomIdx=1;SuspectOrRoomIdx<=5;SuspectOrRoomIdx++){
        // 02530        IF S1$ = S$(X) THEN 2560
        if(strcmp(SuspectName,NPCNames[(int)SuspectOrRoomIdx])==0)goto GotSuspectIdx;
        // 02540    NEXT X
        int dummy_2540=0; // Ignore this line.
    }; // End-For(SuspectOrRoomIdx)
    // 02550    X = 0
    SuspectOrRoomIdx = 0;

  GotSuspectIdx:
    // 02560    IF X = 0 THEN 2400
    if(SuspectOrRoomIdx==0)goto QWhichInfo;
    // 02570    IF S1$ <> S$(M) THEN 2870
    if(strcmp(SuspectName,NPCNames[(int)Killer])!=0)goto ClewsoGotItWrong;
    // 02580    PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    b2c_fprintf(stdout,"YOU HAVE THE KILLER, INSPECTOR CLEW-SO."); b2c_fprintf(stdout,"\n");
    // 02590    H = H + 1
    TallyInfoCorrect = TallyInfoCorrect+1;
    // 02600    IF H = 3 THEN 2840
    if(TallyInfoCorrect==3)goto GotSolution;
    // 02610    GOTO 1580
    goto QClewsoSuspect;

  QTimeOfMurder:
    // 02620    PRINT "TIME OF THE MURDER ";
    b2c_fprintf(stdout,"TIME OF THE MURDER "); 
    // 02630    INPUT T1$
    // Start of Basic INPUT statement 02630
    printf(" ? ");
    char inpbuf_02630[100];
    if(fgets(inpbuf_02630,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02630=strtok(inpbuf_02630," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02630==nullptr){
            TimeAnswer = "";
        }else{
            TimeAnswer = ps_02630;
        };
    }; // End of Basic INPUT statement 02630
    // 02640    T1 = VAL(T1$)
    idx2 = VAL(TimeAnswer);
    // 02650    IF T1 < 1 THEN 2620
    if(idx2<1)goto QTimeOfMurder;
    // 02660    IF T1 > 9 THEN 2620
    if(idx2>9)goto QTimeOfMurder;
    // 02670    IF T1 <> T THEN 2870
    if(idx2!=TimeOfMurder)goto ClewsoGotItWrong;
    // 02680    PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    b2c_fprintf(stdout,"INSPECTOR YOU HAVE THE RIGHT TIME."); b2c_fprintf(stdout,"\n");
    // 02690    H = H + 1
    TallyInfoCorrect = TallyInfoCorrect+1;
    // 02700    IF H = 3 THEN 2840
    if(TallyInfoCorrect==3)goto GotSolution;
    // 02710    GOTO 1580
    goto QClewsoSuspect;

  QRoomOfMurder:
    // 02720    PRINT "ROOM OF THE MURDER ";
    b2c_fprintf(stdout,"ROOM OF THE MURDER "); 
    // 02730    INPUT R1$
    // Start of Basic INPUT statement 02730
    printf(" ? ");
    char inpbuf_02730[100];
    if(fgets(inpbuf_02730,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02730=strtok(inpbuf_02730," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02730==nullptr){
            RoomName = "";
        }else{
            RoomName = ps_02730;
        };
    }; // End of Basic INPUT statement 02730
    // 02740    FOR X = 1 TO 6
    for(SuspectOrRoomIdx=1;SuspectOrRoomIdx<=6;SuspectOrRoomIdx++){
        // 02750        IF R1$ = R$(X) THEN 2780
        if(strcmp(RoomName,RoomNames[(int)SuspectOrRoomIdx])==0)goto CheckRightRoom;
        // 02760    NEXT X
        int dummy_2760=0; // Ignore this line.
    }; // End-For(SuspectOrRoomIdx)
    // 02770    X = 0
    SuspectOrRoomIdx = 0;

  CheckRightRoom:
    // 02780    IF X = 0 THEN 2720
    if(SuspectOrRoomIdx==0)goto QRoomOfMurder;
    // 02790    IF R1$ <> R$(R) THEN 2870
    if(strcmp(RoomName,RoomNames[(int)RoomOfMurder])!=0)goto ClewsoGotItWrong;
    // 02800    PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    b2c_fprintf(stdout,"INSPECTOR , YOU NOW HAVE THE ROOM."); b2c_fprintf(stdout,"\n");
    // 02810    H = H + 1
    TallyInfoCorrect = TallyInfoCorrect+1;
    // 02820    IF H <> 3 THEN 1580
    if(TallyInfoCorrect!=3)goto QClewsoSuspect;
    // 02830    REM CONFIRMATIONS

  GotSolution:
    // 02840    PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    b2c_fprintf(stdout,"YOU ARE BRILLIANT INSPECTOR CLEW-SO."); b2c_fprintf(stdout,"\n");
    // 02850    PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    b2c_fprintf(stdout,"IT TOOK YOU  %d  QUESTIONS AND  %d CONFRONTATIONS.",ClewsoQuestionCnt,ClewsoConfrontCnt); b2c_fprintf(stdout,"\n");
    // 02860    GOTO 2930
    goto QNewGame;

  ClewsoGotItWrong:
    // 02870    PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    b2c_fprintf(stdout,"INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"); b2c_fprintf(stdout,"\n");
    // 02880    GOTO 1580
    goto QClewsoSuspect;

  ClewsoGivesUp:
    // 02890    PRINT "TOO BAD INSPECTOR CLEW-SO"
    b2c_fprintf(stdout,"TOO BAD INSPECTOR CLEW-SO"); b2c_fprintf(stdout,"\n");
    // 02900    PRINT " THE FACTS ARE:"
    b2c_fprintf(stdout," THE FACTS ARE:"); b2c_fprintf(stdout,"\n");
    // 02910    PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    b2c_fprintf(stdout,"%s KILLED THE HOST AT  %d  O'CLOCK IN THE ",NPCNames[(int)Killer],TimeOfMurder); 
    // 02920    PRINT R$(R); " (ROOM)"
    b2c_fprintf(stdout,"%s (ROOM)",RoomNames[(int)RoomOfMurder]); b2c_fprintf(stdout,"\n");

  QNewGame:
    // 02930    PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    b2c_fprintf(stdout,"DO YOU WANT A NEW CASE INSPECTOR  "); 
    // 02940    INPUT A$
    // Start of Basic INPUT statement 02940
    printf(" ? ");
    char inpbuf_02940[100];
    if(fgets(inpbuf_02940,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02940=strtok(inpbuf_02940," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02940==nullptr){
            s1Answer = "";
        }else{
            s1Answer = ps_02940;
        };
    }; // End of Basic INPUT statement 02940
    // 02950    IF A$ = "YES" THEN 1180
    if(strcmp(s1Answer,"YES")==0)goto StartGame;
    // 02960    IF A$ = "Y" THEN 1180
    if(strcmp(s1Answer,"Y")==0)goto StartGame;

  QuitGame:
    // 02970    END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
