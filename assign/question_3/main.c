#include <stdio.h>

int main(){
    /* code */
    int user;
    printf("\tWelcome to the ZAMTEl Menu\n");
    printf("1) Vibez\n"); 
    printf("2) Supa Cheza\n"); 
    printf("3) Ni Yanthu\n"); 
    printf("4) All-net-Freedom\n"); 
    printf("5) Data Offers\n"); 
    printf("6) Balance\n"); 
    printf("7) Woza Weekend\n"); 
    printf("8) Velocity Lite\n"); 
    printf("9) Buy4Other\n"); 

    scanf("%d", &user);
    switch (user){
        // Vibez
    case 1:
        printf("1) K5-880MB-24Hours\n"); 
        printf("2) K15-2.5GB + WTFI-7Days\n");
        printf("3) K25- 6GB+WTFI- 7Days");
        printf("4) K110-15GB + WTFI-30Days Days\n"); 
        printf("5) K5-30Mins, 35SMS, 120MB\n"); 
        printf("6) K10-65Mins, 80SMS, 220MB\n");
        printf("press 00 for main menu\n");
        // break;

        int user;
        scanf("%d", &user);
        switch (user){
            // Vibez 1
        case 1:
            /* code */
                printf("Are you sure you want to subscribe to 880MB-24Hours for K5\n");
                printf("1) Yes\n");
                printf("2) No\n");

                scanf("%d", &user);

                switch (user) {
                    case 1:
                        printf("Please select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");

                        scanf("%d", &user);

                        switch (user) {
                            case 1:
                                printf("You have subscribed to 880MB-24hours for K5\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 880MB-24hours for K5\n");
                                break;
                            default:
                                printf("Invalid input\n");
                                break;
                        }
                        break;
                    case 2:
                        printf("Thank you for using Zamtel\n");
                        break;
                    default:
                        printf("Invalid input\n");
                        break;
                }
                break; 
        case 2:
            printf("Are you sure you want to subscribe to 2.5GB + WTFI 7Days for K15\n");
            printf("1) Yes\n");
            printf("2) No\n");

            scanf("%d", &user);
            switch (user){
                // option 1 of 1 of 1
                case 1:
                    /* code */
                    printf("\tPlease select payment method\n");
                    printf("1) Main account\n");
                    printf("2) Mobile Money\n");

                    scanf("%d", &user);
                    switch(user){
                        // option 1 of 1 of 1 of 1
                        case 1 :
                            printf("You have subscribed to 2.5GB + WTFI 7Days for K15\n");
                            break;
                        case 2:
                            int pin;
                            printf("Input mobile money pin\n");
                            scanf("%d", &pin);
                            printf("You have subscribed to 2.5GB + WTFI 7Days for K15\n");
                            break;
                        default:
                            printf("Invalid input\n");
                            break;
                }
                    break;
                case 2:
                    printf("Thank you for using Zamtel\n");
                    break;
                default:
                    printf("Invalid input\n");
                    break;
            }
            break;
        case 3:
            printf("Are you sure you want to subscribe to 6GB + WTFI 7Days for K25\n");
            printf("1) Yes\n");
            printf("2) No\n");

            scanf("%d", &user);
            switch (user){
                // option 1 of 1 of 1
                case 1:
                    /* code */
                    printf("\tPlease select payment method\n");
                    printf("1) Main account\n");
                    printf("2) Mobile Money\n");

                    scanf("%d", &user);
                    switch(user){
                        // option 1 of 1 of 1 of 1
                        case 1 :
                            printf("You have subscribed to 6GB + WTFI 7Days for K25\n");
                            break;
                        case 2:
                            int pin;
                            printf("Input mobile money pin\n");
                            scanf("%d", &pin);
                            printf("You have subscribed to 6GB + WTFI 7Days for K25\n");
                            break;
                        default:
                            printf("Invalid input\n");
                            break;
                };
                    break;
                case 2:
                    printf("Thank you for using Zamtel\n");
                    break;
                default:
                    printf("Invalid input\n");
                    break;
            }
            break;
        case 4:
            printf("Are you sure you want to subscribe to 15GB + WTFI 30Days for K110\n");
            printf("1) Yes\n");
            printf("2) No\n");

            scanf("%d", &user);
            switch (user){
                // option 1 of 1 of 1
                case 1:
                    /* code */
                    printf("\tPlease select payment method\n");
                    printf("1) Main account\n");
                    printf("2) Mobile Money\n");

                    scanf("%d", &user);
                    switch(user){
                        // option 1 of 1 of 1 of 1
                        case 1 :
                            printf("You have subscribed to 15GB + WTFI 30Days for K110\n");
                            break;
                        case 2:
                            int pin;
                            printf("Input mobile money pin\n");
                            scanf("%d", &pin);
                            printf("You have subscribed to 15GB + WTFI 30Days for K110\n");
                            break;
                        default:
                            printf("Invalid input\n");
                            break;
                };
                    break;
                case 2:
                    printf("Thank you for using Zamtel\n");
                    break;
                default:
                    printf("Invalid input\n");
                    break;
            }
            break;
        case 5:
            printf("Are you sure you want to subscribe to 30mins, 35sms, 120mb for K5\n");
            printf("1) Yes\n");
            printf("2) No\n");

            scanf("%d", &user);
            switch (user){
                // option 1 of 1 of 1
                case 1:
                    /* code */
                    printf("\tPlease select payment method\n");
                    printf("1) Main account\n");
                    printf("2) Mobile Money\n");

                    scanf("%d", &user);
                    switch(user){
                        case 1 :
                            printf("You have subscribed to 30mins, 35sms, 120mb for K5\n");
                            break;
                        case 2:
                            int pin;
                            printf("Input mobile money pin\n");
                            scanf("%d", &pin);
                            printf("You have subscribed to 30mins, 35sms, 120mb for K5\n");
                            break;
                        default:
                            printf("Invalid input\n");
                            break;
                };
                    break;
                case 2:
                    printf("Thank you for using Zamtel\n");
                    break;
                default:
                    printf("Invalid input\n");
                    break;
            }
            break;
        case 6:
            printf("Are you sure you want to subscribe to 65Mins, 80sms, 220MB for K10\n");
            printf("1) Yes\n");
            printf("2) No\n");

            scanf("%d", &user);
            switch (user){
                // option 1 of 1 of 1
                case 1:
                    /* code */
                    printf("\tPlease select payment method\n");
                    printf("1) Main account\n");
                    printf("2) Mobile Money\n");

                    scanf("%d", &user);
                    switch(user){
                        case 1 :
                            printf("You have subscribed to 65Mins, 80sms, 220MB for K10\n");
                            break;
                        case 2:
                            int pin;
                            printf("Input mobile money pin\n");
                            scanf("%d", &pin);
                            printf("You have subscribed to 65Mins, 80sms, 220MB for K10\n");
                            break;
                        default:
                            printf("Invalid input\n");
                            break;
                }
                    break;
                case 2:
                    printf("Thank you for using Zamtel\n");
                    break;
                default:
                    printf("Invalid input\n");
                    break;
            }
            break;
        default:
            printf("thank you\n");
            break;
        };
    
    // // Supa cheza
    // case 2:
    //     printf("\tCheza Offers");
    //     printf("1) Supa Cheza");
    //     printf("2) Freedom-Voice and Data");
    //     // break;
    //     int user;
    //     scanf("%d", &user);
    //     switch (user){
    //     case 1:
    //         /* code */
    //         printf("\tSupa cheza offers:\n");
    //         printf("Voice Offers");
    //         printf("Data Offers");
    //         // break;
    //         int user;
    //         scanf("%d", &user);
    //         switch (user){
    //         case 1:
    //             /* code */
    //             printf("\tSupa Cheza\n");
    //             printf("1) Daily\n");
    //             printf("2) Weekly\n");
    //             printf("3) Monthly\n");
    //             printf("4) YourGift\n");
    //             printf("5) Balance\n");
    //             printf("99) Main menu\n");
    //             // break;

    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //             case 1:
    //                 /* code */
    //                 printf("1) Get 30 OnNet Mins for 24Hours @K1\n");
    //                 printf("1) Get 26 OnNet Mins for 24Hours @K2\n");
    //                 printf("1) Get 41 OnNet Mins for 24Hours @K3\n");
    //                 printf("99) Main menu\n");
    //                 // break;

    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                 case 1:
    //                     printf("Choose a Payment Menthod\n");
    //                     printf("1) Main Account\n");
    //                     printf("2) Mobile Money\n");
    //                     printf("99) Main Menu");
    //                     // break;
    //                     int user;
    //                     scanf("%d", &user);
    //                     switch (user){
    //                     case 1:
    //                         /* code */
    //                         printf("You have subscribed to 30 onNet minutes for K1");
    //                         break;
    //                     case 2:
    //                         printf("You have subscribed to 30 onNet minutes for K1");
    //                         break;
    //                     case 3:
    //                         main();
    //                         break;
    //                     }
    //                 case 2:
    //                     printf("Choose a Payment Menthod\n");
    //                     printf("1) Main Account\n");
    //                     printf("2) Mobile Money\n");
    //                     printf("99) Main Menu");
    //                     // break;
    //                     int user;
    //                     scanf("%d", &user);
    //                     switch (user){
    //                     case 1:
    //                         /* code */
    //                         printf("You have subscribed to 26 onNet minutes for K2");
    //                         break;
    //                     case 2:
    //                         printf("You have subscribed to 26 onNet minutes for K2");
    //                         break;
    //                     case 3:
    //                         main();
    //                         break;
    //                     }
    //                 case 3:
    //                     printf("Choose a Payment Menthod\n");
    //                     printf("1) Main Account\n");
    //                     printf("2) Mobile Money\n");
    //                     printf("99) Main Menu");
    //                     // break;
    //                     int user;
    //                     scanf("%d", &user);
    //                     switch (user){
    //                     case 1:
    //                         /* code */
    //                         printf("You have subscribed to 41 onNet minutes for K3");
    //                         break;
    //                     case 2:
    //                         printf("You have subscribed to 41 onNet minutes for K3");
    //                         break;
    //                     case 3:
    //                         main();
    //                         break;
    //                     }
    //                 case 99:
    //                     main();
    //                     break;
    //                 }
                
    //             case 2:
    //                 /*Supa cheza weekly*/
    //                 printf("1) Get 44 onNet Mins for 7 Days @ K5\n");
    //                 printf("2) Get 99 onNet Mins for 7 Days @ K10\n");
    //                 // break;

    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     case 1:
    //                     printf("Choose a Payment Menthod\n");
    //                     printf("Main Account\n");
    //                     printf("Mobile Money\n");
    //                     printf("99) Main Menu");
    //                     // break;
    //                     int user;
    //                     scanf("%d", &user);
    //                     switch (user){
    //                         case 1:
    //                             /* code */
    //                             printf("You have subscribed to 44 onNet minutes for K5");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 99 onNet minutes for K10");
    //                             break;
    //                         case 3:
    //                             main();
    //                             break;
    //                         }
    //                 }
    //             case 3:
    //                 /* Supa cheza Monthly */
    //                 printf("1) Get 1200 onNet Mins for 30 Days @ K100\n");
    //                 printf("99) Main Menu\n");
    //                 // break;
    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     case 1:
    //                         printf("Choose a Payment Menthod\n");
    //                         printf("1) Main Account\n");
    //                         printf("2) Mobile Money\n");
    //                         printf("99) Main Menu");
    //                         // break;
    //                         int user;
    //                         scanf("%d", &user);
    //                         switch (user){
    //                             case 1:
    //                                 /* code */
    //                                 printf("You have subscribed to 1200 onNet minutes for K100");
    //                                 break;
    //                             case 2:
    //                                 printf("You have subscribed to 1200 onNet minutes for K100");
    //                                 break;
    //                             case 3:
    //                                 main();
    //                                 break;
    //                         }
    //                     case 99:
    //                         main();
    //                         break;
    //                         }
    //             case 4:
    //             /* Supa cheza YourGift*/
    //                 printf("you are not eligible for this offer\n");
    //                 break;
    //             case 5:
    //                 /* Supa cheza Balance */
    //                 printf("Thank you for using Zamtel\n");
    //                 break;
                
    //             case 99:
    //             /* Main menu*/
    //                 main();
    //                 break;
    //             }
    //         case 2:
    //         /*Data Offers*/
    //             printf("SUPA Cheza\n");
    //             printf("1) Daily");
    //             printf("2) Weekly");
    //             printf("3) Monthly");
    //             printf("4) YourGift");
    //             printf("5) Balance");
    //             printf("99) Main Menu");

    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //             case 1:
    //                 /* code */
    //                 break;
    //             case 2:
    //                 break;
    //             case 3:
    //                 /* code */
    //                 break;
    //             case 4:
    //                 break;
    //             }
    //         }

    //     case 2:
    //         printf("\tFreedom Voice and data offers:\n");
    //             break;
    //     }
    // case 3:
    //     printf("\tChoose option(Ni Yathu offers)");
    //     printf("1) Daily\n");
    //     printf("2) Weekly\n");
    //     printf("3) Monthly\n");
    //     printf("4) Ni Yathu Data\n");
    //     printf("00) Main menu\n");   
    //     // break;

    //     int user;
    //     scanf("%d", &user);
    //     switch (user){
    //     case 1:
    //         /* Ni Yathu daily */
    //         printf("Ni Yathu Daily\n");
    //         printf("1) K2-13mins, 120sms\n");
    //         printf("2)K5-35mins, 250sms,40mb\n");
    //         printf("3) K10-75mins, 250sms,30mb\n");
    //         printf("99) back\n");
    //         // break;
    //         int user;
    //         scanf("%d", &user);
    //         switch (user){
    //             case 1:
    //                 printf("Are you sure you want to subscribe to 13mins,120sms for K2\n");
    //                 printf("1) Yes\n");
    //                 printf("2) No\n");
    //                 // break;
    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         // under option 3
    //                         case 1 :
    //                             printf("You have subscribed to 13mins,120sms for K2\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 13mins,120sms for K2\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //             case 2:
    //                 printf("Are you sure you want to subscribe to 35mins,250sms and 40mb for K5\n");
    //                 printf("1) Yes\n");
    //                 printf("2) No\n");
    //                 // break;
    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         // under option 3
    //                         case 1 :
    //                             printf("You have subscribed to 35mins,250sms and 40mb for K5\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 35mins,250sms and 40 mb for K5\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //             case 3:
    //                 printf("Are you sure you want to subscribe to 75mins,250sms and 30mb for K10\n");
    //                 printf("1) Yes\n");
    //                 printf("2) No\n");
    //                 // break;
    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         // under option 3
    //                         case 1 :
    //                             printf("You have subscribed to 75mins,250sms and 30mb for K10\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 75mins,250sms and 30mb for K10\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //             case 4:
    //                 main();
    //                 break;
    //             }
    //         }
    //     case 2:
    //         /* Ni Yathu weekly */
    //         printf("\tNi Yathu weekly\n");
    //         printf("1) K5-35mins,120sms,20mb\n");
    //         printf("2) K10-70mins,220sms,80mb\n");
    //         printf("3) K20-150mins,300sms,100mb\n");
    //         printf("4) K30-220mins,400sms,150mb\n");
    //         printf("5) K50-350mins,800sms,400mb\n");
    //         printf("99) back\n");
    //         // break;
    //         int user;
    //         scanf("%d", &user);
    //         switch (user){
    //             case 1:
    //                 printf("Are you sure you want to subscribe to 35mins,120sms and 20mb for K5\n");
    //                 printf("1) Yes\n");
    //                 printf("2) No\n");
    //                 // break;
    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         case 1 :
    //                             printf("You have subscribed to 35mins,120sms and 20mb for K5\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 35mins,120sms and 20mb for K5\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //             case 2:
    //                 printf("Are you sure you want to subscribe to 70mins,220sms and 80mb for K10\n");
    //                 printf("1) Yes\n");
    //                 printf("2) No\n");
    //                 // break;
    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         // under option 3
    //                         case 1 :
    //                             printf("You have subscribed to 70mins,220sms and 80mb for K10\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 70mins,220sms and 80mb for K10\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //             case 3:
    //                 printf("Are you sure you want to subscribe to 150mins,300sms and 100mb for K20\n");
    //                 printf("1) Yes\n");
    //                 printf("2) No\n");
    //                 // break;
    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         // under option 3
    //                         case 1 :
    //                             printf("You have subscribed to 150mins,300sms and 100mb for K20\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 150mins,300sms and 100mb for K20\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //             case 4:
    //                 printf("Are you sure you want to subscribe to 220mins,400sms and 150mb for K30\n");
    //                 printf("1) Yes\n");
    //                 printf("2) No\n");
    //                 // break;
    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     case 1:
    //                         /* code */
    //                         printf("\tPlease select payment method\n");
    //                         printf("1) Main account\n");
    //                         printf("2) Mobile Money\n");
    //                         // break;

    //                         int user;
    //                         scanf("%d", &user);
    //                         switch(user){
    //                             // under option 3
    //                             case 1 :
    //                                 printf("You have subscribed to 220mins,400sms and 150mb for K30\n");
    //                                 break;
    //                             case 2:
    //                                 printf("You have subscribed to 220mins,400sms and 150mb for K30\n");
    //                                 break;
    //                             default:
    //                                 printf("Subscription cancelled\n");
    //                                 break;
    //                             }
    //                     case 2:
    //                         printf("Subscription cancelled\n");
    //                         break;
    //                 }
    //             case 5:
    //                 printf("Are you sure you want to subscribe to 350mins,800sms and 400mb for K50\n");
    //                 printf("1) Yes\n");
    //                 printf("2) No\n");
    //                 // break;
    //                 int user;
    //                 scanf("%d", &user);
    //                 switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         // under option 3
    //                         case 1 :
    //                             printf("You have subscribed to 350mins,800sms and 400mb for K50\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 350mins,800sms and 400mb for K50\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //             case 6:
    //                 main();
    //                 break;
    //             }
    //         }  
    //     case 3:
    //         /* Ni Yathu Monthly */
    //         printf("\tNi Yathu Monthly\n");
    //         printf("1) K50-350mins,500sms,300mb\n");
    //         printf("2) K75-550mins,750sms,700mb\n");
    //         printf("3) K100-850mins,1000sms,1GB\n");
    //         printf("4) K150-1250mins,1000sms,1.2GB\n");
    //         printf("99) back\n");
    //         // break;
    //         int user;
    //         scanf("%d", &user);
    //         switch (user){
    //         case 1:
    //         /* code */
    //             printf("Are you sure you want to subscribe to 350mins,500sms and 300mb for K50\n");
    //             printf("1) Yes\n");
    //             printf("2) No\n");
    //             // break;
    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         // under option 3
    //                         case 1 :
    //                             printf("You have subscribed to 350mins,500sms and 300mb for K50\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 350mins,500sms and 300mb for K50\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //         case 2:
    //             printf("Are you sure you want to subscribe to 550mins,750sms and 700mb for K75\n");
    //             printf("1) Yes\n");
    //             printf("2) No\n");
    //             // break;
    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         // under option 3
    //                         case 1 :
    //                             printf("You have subscribed to 550mins,750sms and 700mb for K75\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed to 550mins,750sms and 700mb for K75\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //         case 3:
    //             printf("Are you sure you want to subscribe to 850mins,1000sms and 1GB for K100\n");
    //             printf("1) Yes\n");
    //             printf("2) No\n");
    //             // break;
    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //                 // option 1 of 1 of 1
    //             case 1:
    //                 /* code */
    //                 printf("\tPlease select payment method\n");
    //                 printf("1) Main account\n");
    //                 printf("2) Mobile Money\n");
    //                 // break;

    //                 int user;
    //                 scanf("%d", &user);
    //                 switch(user){
    //                     // under option 3
    //                     case 1 :
    //                         printf("You have subscribed to 850mins,1000sms and 1GB for K100\n");
    //                         break;
    //                     case 2:
    //                         printf("You have subscribed to 850mins,1000sms and 1GB for K100\n");
    //                         break;
    //                     default:
    //                         printf("Subscription cancelled\n");
    //                         break;
    //                     }
    //             case 2:
    //                 printf("Subscription cancelled\n");
    //                 break;
    //             }
    //         case 4:
    //             printf("Are you sure you want to subscribe to 1250mins,1000sms and 1.2GB for K150\n");
    //             printf("1) Yes\n");
    //             printf("2) No\n");
    //             // break;
    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //                 // option 1 of 1 of 1
    //             case 1:
    //                 /* code */
    //                 printf("\tPlease select payment method\n");
    //                 printf("1) Main account\n");
    //                 printf("2) Mobile Money\n");
    //                 // break;

    //                 int user;
    //                 scanf("%d", &user);
    //                 switch(user){
    //                     // under option 3
    //                     case 1 :
    //                         printf("You have subscribed to 1250mins,1000sms and 1.2GB for K150\n");
    //                         break;
    //                     case 2:
    //                         printf("You have subscribed to 1250mins,1000sms and 1.2GB for K150\n");
    //                         break;
    //                     default:
    //                         printf("Subscription cancelled\n");
    //                         break;
    //                     }
    //             case 2:
    //                 printf("Subscription cancelled\n");
    //                 break;
    //             }
    //         case 99:
    //             main();
    //             break;
    //         }
        
    //     case 4:
    //         /* Ni Yathu Data */
    //         printf("\tNi Yathu Data\n");
    //         printf("1) K5- 1GB, 3Days\n");
    //         printf("2) K15- 2GB, 7Days\n");
    //         printf("3) K25- 5GB, 7Days\n");
    //         printf("4) K60- 11GB, 7Days\n");
    //         printf("press 00 for main menu\n");
    //         // break;
    //         int user;
    //         scanf("%d", &user);
    //         switch (user){
    //         case 1:
    //         /* code */
    //             printf("Are you sure you want to subscribe 1GB for K5\n");
    //             printf("1) Yes\n");
    //             printf("2) No\n");
    //             // break;
    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         // under option 3
    //                         case 1 :
    //                             printf("You have subscribed 1GB for K5\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed 1GB for K5\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //         case 2:
    //             printf("Are you sure you want to subscribe 2GB for K15\n");
    //             printf("1) Yes\n");
    //             printf("2) No\n");
    //             // break;
    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         case 1 :
    //                             printf("You have subscribed 2GB for K15\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed 2GB for K15\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //         case 3:
    //             printf("Are you sure you want to subscribe 5GB for K25\n");
    //             printf("1) Yes\n");
    //             printf("2) No\n");
    //             // break;
    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         case 1 :
    //                             printf("You have subscribed 5GB for K25\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed 5GB for K25\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //         case 4:
    //             printf("Are you sure you want to subscribe 11GB for K60\n");
    //             printf("1) Yes\n");
    //             printf("2) No\n");
    //             // break;
    //             int user;
    //             scanf("%d", &user);
    //             switch (user){
    //                     // option 1 of 1 of 1
    //                 case 1:
    //                     /* code */
    //                     printf("\tPlease select payment method\n");
    //                     printf("1) Main account\n");
    //                     printf("2) Mobile Money\n");
    //                     // break;

    //                     int user;
    //                     scanf("%d", &user);
    //                     switch(user){
    //                         case 1 :
    //                             printf("You have subscribed  11GB for K60\n");
    //                             break;
    //                         case 2:
    //                             printf("You have subscribed  11GB for K60\n");
    //                             break;
    //                         default:
    //                             printf("Subscription cancelled\n");
    //                             break;
    //                         }
    //                 case 2:
    //                     printf("Subscription cancelled\n");
    //                     break;
    //                 }
    //         case 00:
    //             main();
    //             break;
    //         }
    //     case 00:
    //         /* Ni Yathu Main menu */
    //         main();
    //         break;
    //     }
                    
    // case 4:
    //     break;
    // case 5:
    //     break;
    // case 6:
    //     break;
    // case 7:
    //     break;
    // case 8:
    //     break;
    // case 9:
    //     break;
    }
    return 0;
}
