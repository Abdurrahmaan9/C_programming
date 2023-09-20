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

    // VIBEZ
    scanf("%d", &user);
    switch (user){
    case 1:
        printf("1) K5-880MB-24Hours\n"); 
        printf("2) K15-2.5GB + WTFI-7Days\n");
        printf("3) K25- 6GB+WTFI- 7Days");
        printf("4) K110-15GB + WTFI-30Days Days\n"); 
        printf("5) K5-30Mins, 35SMS, 120MB\n"); 
        printf("6) K10-65Mins, 80SMS, 220MB\n");
        printf("press 00 for main menu\n");
        // break;

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
        break;
    // Supa cheza
    case 2:
        printf("\tCheza Offers\n");
        printf("1) Supa Cheza\n");
        printf("2) Freedom-Voice and Data\n");
        // break;

        scanf("%d", &user);
        switch (user){
        case 1:
            /* code */
            printf("\tSupa cheza offers:\n");
            printf("1) Voice Offers\n");
            printf("2) Data Offers\n");
            // break;
    
            scanf("%d", &user);
            switch (user){
            case 1:
                /* code */
                printf("\tSupa Cheza\n");
                printf("1) Daily\n");
                printf("2) Weekly\n");
                printf("3) Monthly\n");
                printf("4) YourGift\n");
                printf("5) Balance\n");
                printf("99) Main menu\n");
                // break;

                scanf("%d", &user);
                switch (user){
                    case 1:
                        /* code */
                        printf("1) Get 30 OnNet Mins for 24Hours @K1\n");
                        printf("2) Get 26 OnNet Mins for 24Hours @K2\n");
                        printf("3) Get 41 OnNet Mins for 24Hours @K3\n");
                        printf("99) Main menu\n");
                        // break;

                        scanf("%d", &user);
                        switch (user){
                        case 1:
                            printf("Choose a Payment Menthod\n");
                            printf("1) Main Account\n");
                            printf("2) Mobile Money\n");
                            printf("99) Main Menu\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                            case 1:
                                /* code */
                                printf("You have subscribed to 30 onNet minutes for K1\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 30 onNet minutes for K1\n");
                                break;
                            case 99:
                                main();
                                break;
                            }
                            break;
                        case 2:
                            printf("Choose a Payment Menthod\n");
                            printf("1) Main Account\n");
                            printf("2) Mobile Money\n");
                            printf("99) Main Menu\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                            case 1:
                                /* code */
                                printf("You have subscribed to 26 onNet minutes for K2\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 26 onNet minutes for K2\n");
                                break;
                            case 99:
                                main();
                                break;
                            }
                            break;
                        case 3:
                            printf("Choose a Payment Menthod\n");
                            printf("1) Main Account\n");
                            printf("2) Mobile Money\n");
                            printf("99) Main Menu\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                            case 1:
                                /* code */
                                printf("You have subscribed to 41 onNet minutes for K3\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 41 onNet minutes for K3\n");
                                break;
                            case 99:
                                main();
                                break;
                            }
                            break;
                        case 99:
                            main();
                            break;
                        }
                        break;
                    
                    case 2:
                        /*Supa cheza weekly*/
                        printf("1) Get 44 onNet Mins for 7 Days @ K5\n");
                        printf("2) Get 99 onNet Mins for 7 Days @ K10\n");
                        // break;

                
                        scanf("%d", &user);
                        switch (user){
                            case 1:
                            printf("Choose a Payment Menthod\n");
                            printf("1) Main Account\n");
                            printf("2) Mobile Money\n");
                            printf("99) Main Menu\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                case 1:
                                    /* code */
                                    printf("You have subscribed to 44 onNet minutes for K5\n");
                                    break;
                                case 2:
                                    int pin;
                                    printf("Input mobile money pin\n");
                                    scanf("%d", &pin);
                                    printf("You have subscribed to 99 onNet minutes for K10\n");
                                    break;
                                case 99:
                                    main();
                                    break;
                                }
                                break;
                        }
                    case 3:
                        /* Supa cheza Monthly */
                        printf("1) Get 1200 onNet Mins for 30 Days @ K100\n");
                        printf("99) Main Menu\n");
                        // break;
                
                        scanf("%d", &user);
                        switch (user){
                            case 1:
                                printf("Choose a Payment Menthod\n");
                                printf("1) Main Account\n");
                                printf("2) Mobile Money\n");
                                printf("99) Main Menu\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                    case 1:
                                        /* code */
                                        printf("You have subscribed to 1200 onNet minutes for K100\n");
                                        break;
                                    case 2:
                                        int pin;
                                        printf("Input mobile money pin\n");
                                        scanf("%d", &pin);
                                        printf("You have subscribed to 1200 onNet minutes for K100\n");
                                        break;
                                    case 99:
                                        main();
                                        break;
                                }
                                break;
                            case 99:
                                main();
                                break;
                            }
                            break;
                    case 4:
                    /* Supa cheza YourGift*/
                        printf("you are not eligible for this offer\n");
                        break;
                    case 5:
                        /* Supa cheza Balance */
                        printf("your balance is xxxxx");
                        printf("Thank you for using Zamtel\n");
                        break;
                    
                    case 99:
                    /* Main menu*/
                        main();
                        break;
                }
                break;
            case 2:
            /*CHEZA Data Offers*/
                printf("SUPA Cheza\n");
                printf("1) Daily\n");
                printf("2) Weekly\n");
                printf("3) Monthly\n");
                printf("4) YourGift\n");
                printf("5) Balance\n");
                printf("99) Main Menu\n");

        
                scanf("%d", &user);
                switch (user){
                case 1:
                    /* code */
                    printf("\tSupa Cheza\n");
                    printf("1) Get 1.1 GB Data for 24Hrs @ K5\n");
                    printf("2) Get 3 GB Data for 24Hrs @ K10\n");
                    printf("\n");
                    printf("99) Main Menu\n");

                    scanf("%d", &user);
                    switch (user){
                        case 1:
                            printf("Choose a Payment Menthod\n");
                            printf("1) Main Account\n");
                            printf("2) Mobile Money\n");
                            printf("99) Main Menu\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                case 1:
                                    /* code */
                                    printf("You have subscribed to 1.1 GB Data for K5\n");
                                    break;
                                case 2:
                                    int pin;
                                    printf("Input mobile money pin\n");
                                    scanf("%d", &pin);
                                    printf("You have subscribed to 1.1 GB Data for K5\n");
                                    break;
                                case 99:
                                    main();
                                    break;
                            }
                            break;
                        case 2:
                            printf("Choose a Payment Menthod\n");
                            printf("1) Main Account\n");
                            printf("2) Mobile Money\n");
                            printf("99) Main Menu\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                case 1:
                                    /* code */
                                    printf("You have subscribed to 3 GB Data for K10\n");
                                    break;
                                case 2:
                                    int pin;
                                    printf("Input mobile money pin\n");
                                    scanf("%d", &pin);
                                    printf("You have subscribed to 3 GB Data for K10\n");
                                    break;
                                case 99:
                                    main();
                                    break;
                            }
                            break;
                        case 99:
                            main();
                            break;
                    }
                    break;
                case 2:
                    printf("\tSupa Cheza\n");
                    printf("1) Get 6 GB Data for 7 Days @ K20\n");
                    printf("\n");
                    printf("99) Main Menu\n");

                    scanf("%d", &user);
                    switch (user){
                    case 1:
                        /* code */
                        printf("Choose a Payment Menthod\n");
                        printf("1) Main Account\n");
                        printf("2) Mobile Money\n");
                        printf("99) Main Menu\n");
                        // break;
                
                        scanf("%d", &user);
                        switch (user){
                            case 1:
                                /* code */
                                printf("You have subscribed to 6 GB Data for K20\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 6 GB Data for K20\n");
                                break;
                            case 99:
                                main();
                                break;
                        }
                        break;
                    
                    case 99:
                        main();
                        break;
                    }
                    break;
                case 3:
                    /* code */
                    printf("\tSupa Cheza\n");
                    printf("1) Get 18 GB Data for 30 Days @ K100\n");
                    printf("2) Get 25 GB data for 30 Days @ K150\n");
                    printf("\n");
                    printf("99) Main Menu\n");

                    scanf("%d", &user);
                    switch (user)
                    {
                    case 1:
                        /* code */
                        printf("Choose a Payment Menthod\n");
                        printf("1) Main Account\n");
                        printf("2) Mobile Money\n");
                        printf("99) Main Menu\n");
                        // break;
                
                        scanf("%d", &user);
                        switch (user){
                            case 1:
                                /* code */
                                printf("You have subscribed to 18 GB Data for K100\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 18 GB Data for K100\n");
                                break;
                            case 99:
                                main();
                                break;
                        }
                        break;                   
                    case 2:
                        printf("Choose a Payment Menthod\n");
                        printf("1) Main Account\n");
                        printf("2) Mobile Money\n");
                        printf("99) Main Menu\n");
                        // break;
                
                        scanf("%d", &user);
                        switch (user){
                            case 1:
                                /* code */
                                printf("You have subscribed to 25 GB Data for K150\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 25 GB Data for K150\n");
                                break;
                            case 99:
                                main();
                                break;
                        }
                        break;
                    case 99:
                        main();
                        break;
                    }
                    break;
                case 4:
                    printf("You are not eligible for this offer\n");
                    break;
                    }
                    break;
                case 5:
                    printf("Thank you for using Zamtel\n");
                    break;
                }
                break;
        // SUPA CHEZA FREEDOM OFFERS
        case 2:
            printf("\tFreedom Voice and data offers:\n");
                break;
        }
        break;

    // NI YATHU OFFERS
    case 3:
        printf("\tChoose option(Ni Yathu offers\n)");
        printf("1) Daily\n");
        printf("2) Weekly\n");
        printf("3) Monthly\n");
        printf("4) Ni Yathu Data\n");
        printf("00) Main menu\n");   
        // break;

        scanf("%d", &user);
        switch (user){
        case 1:
            /* Ni Yathu daily */
            printf("Ni Yathu Daily\n");
            printf("1) K2-13mins, 120sms\n");
            printf("2)K5-35mins, 250sms,40mb\n");
            printf("3) K10-75mins, 250sms,30mb\n");
            printf("99) back\n");
            // break;
    
            scanf("%d", &user);
            switch (user){
                case 1:
                    printf("Are you sure you want to subscribe to 13mins,120sms for K2\n");
                    printf("1) Yes\n");
                    printf("2) No\n");
                    // break;
            
                    scanf("%d", &user);
                    switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            // under option 3
                            case 1 :
                                printf("You have subscribed to 13mins,120sms for K2\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 13mins,120sms for K2\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                    break;
                case 2:
                    printf("Are you sure you want to subscribe to 35mins,250sms and 40mb for K5\n");
                    printf("1) Yes\n");
                    printf("2) No\n");
                    // break;
            
                    scanf("%d", &user);
                    switch (user){
                        // option 1 of 1 of 1
                        case 1:
                            /* code */
                            printf("\tPlease select payment method\n");
                            printf("1) Main account\n");
                            printf("2) Mobile Money\n");
                            // break;

                    
                            scanf("%d", &user);
                            switch(user){
                                // under option 3
                                case 1 :
                                    printf("You have subscribed to 35mins,250sms and 40mb for K5\n");
                                    break;
                                case 2:
                                    int pin;
                                    printf("Input mobile money pin\n");
                                    scanf("%d", &pin);
                                    printf("You have subscribed to 35mins,250sms and 40 mb for K5\n");
                                    break;
                                default:
                                    printf("Subscription cancelled\n");
                                    break;
                            }
                            break;
                        case 2:
                            printf("Subscription cancelled\n");
                            break;
                        }
                        break;
                case 3:
                    printf("Are you sure you want to subscribe to 75mins,250sms and 30mb for K10\n");
                    printf("1) Yes\n");
                    printf("2) No\n");
                    // break;
            
                    scanf("%d", &user);
                    switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            // under option 3
                            case 1 :
                                printf("You have subscribed to 75mins,250sms and 30mb for K10\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 75mins,250sms and 30mb for K10\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                    break;
                case 99:
                    main();
                    break;
                }
        case 2:
            /* Ni Yathu weekly */
            printf("\tNi Yathu weekly\n");
            printf("1) K5-35mins,120sms,20mb\n");
            printf("2) K10-70mins,220sms,80mb\n");
            printf("3) K20-150mins,300sms,100mb\n");
            printf("4) K30-220mins,400sms,150mb\n");
            printf("5) K50-350mins,800sms,400mb\n");
            printf("99) back\n");
            // break;
    
            scanf("%d", &user);
            switch (user){
                case 1:
                    printf("Are you sure you want to subscribe to 35mins,120sms and 20mb for K5\n");
                    printf("1) Yes\n");
                    printf("2) No\n");
                    // break;
            
                    scanf("%d", &user);
                    switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            case 1 :
                                printf("You have subscribed to 35mins,120sms and 20mb for K5\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 35mins,120sms and 20mb for K5\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                case 2:
                    printf("Are you sure you want to subscribe to 70mins,220sms and 80mb for K10\n");
                    printf("1) Yes\n");
                    printf("2) No\n");
                    // break;
            
                    scanf("%d", &user);
                    switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            // under option 3
                            case 1 :
                                printf("You have subscribed to 70mins,220sms and 80mb for K10\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 70mins,220sms and 80mb for K10\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                case 3:
                    printf("Are you sure you want to subscribe to 150mins,300sms and 100mb for K20\n");
                    printf("1) Yes\n");
                    printf("2) No\n");
                    // break;
            
                    scanf("%d", &user);
                    switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            // under option 3
                            case 1 :
                                printf("You have subscribed to 150mins,300sms and 100mb for K20\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 150mins,300sms and 100mb for K20\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                case 4:
                    printf("Are you sure you want to subscribe to 220mins,400sms and 150mb for K30\n");
                    printf("1) Yes\n");
                    printf("2) No\n");
                    // break;
            
                    scanf("%d", &user);
                    switch (user){
                        case 1:
                            /* code */
                            printf("\tPlease select payment method\n");
                            printf("1) Main account\n");
                            printf("2) Mobile Money\n");
                            // break;

                    
                            scanf("%d", &user);
                            switch(user){
                                // under option 3
                                case 1 :
                                    printf("You have subscribed to 220mins,400sms and 150mb for K30\n");
                                    break;
                                case 2:
                                    int pin;
                                    printf("Input mobile money pin\n");
                                    scanf("%d", &pin);
                                    printf("You have subscribed to 220mins,400sms and 150mb for K30\n");
                                    break;
                                default:
                                    printf("Subscription cancelled\n");
                                    break;
                                }
                        case 2:
                            printf("Subscription cancelled\n");
                            break;
                    }
                case 5:
                    printf("Are you sure you want to subscribe to 350mins,800sms and 400mb for K50\n");
                    printf("1) Yes\n");
                    printf("2) No\n");
                    // break;
            
                    scanf("%d", &user);
                    switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            // under option 3
                            case 1 :
                                printf("You have subscribed to 350mins,800sms and 400mb for K50\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 350mins,800sms and 400mb for K50\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                    break;
                case 99:
                    main();
                    break;
                }
                break; 
        case 3:
            /* Ni Yathu Monthly */
            printf("\tNi Yathu Monthly\n");
            printf("1) K50-350mins,500sms,300mb\n");
            printf("2) K75-550mins,750sms,700mb\n");
            printf("3) K100-850mins,1000sms,1GB\n");
            printf("4) K150-1250mins,1000sms,1.2GB\n");
            printf("99) back\n");
            // break;
    
            scanf("%d", &user);
            switch (user){
            case 1:
            /* code */
                printf("Are you sure you want to subscribe to 350mins,500sms and 300mb for K50\n");
                printf("1) Yes\n");
                printf("2) No\n");
                // break;
        
                scanf("%d", &user);
                switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            // under option 3
                            case 1 :
                                printf("You have subscribed to 350mins,500sms and 300mb for K50\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 350mins,500sms and 300mb for K50\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                            break;
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                    break;
            case 2:
                printf("Are you sure you want to subscribe to 550mins,750sms and 700mb for K75\n");
                printf("1) Yes\n");
                printf("2) No\n");
                // break;
        
                scanf("%d", &user);
                switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            // under option 3
                            case 1 :
                                printf("You have subscribed to 550mins,750sms and 700mb for K75\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed to 550mins,750sms and 700mb for K75\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                            break;
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                    break;
            case 3:
                printf("Are you sure you want to subscribe to 850mins,1000sms and 1GB for K100\n");
                printf("1) Yes\n");
                printf("2) No\n");
                // break;
        
                scanf("%d", &user);
                switch (user){
                    // option 1 of 1 of 1
                case 1:
                    /* code */
                    printf("\tPlease select payment method\n");
                    printf("1) Main account\n");
                    printf("2) Mobile Money\n");
                    // break;

            
                    scanf("%d", &user);
                    switch(user){
                        // under option 3
                        case 1 :
                            printf("You have subscribed to 850mins,1000sms and 1GB for K100\n");
                            break;
                        case 2:
                            int pin;
                            printf("Input mobile money pin\n");
                            scanf("%d", &pin);
                            printf("You have subscribed to 850mins,1000sms and 1GB for K100\n");
                            break;
                        default:
                            printf("Subscription cancelled\n");
                            break;
                        }
                        break;
                case 2:
                    printf("Subscription cancelled\n");
                    break;
                }
                break;
            case 4:
                printf("Are you sure you want to subscribe to 1250mins,1000sms and 1.2GB for K150\n");
                printf("1) Yes\n");
                printf("2) No\n");
                // break;
        
                scanf("%d", &user);
                switch (user){
                    // option 1 of 1 of 1
                case 1:
                    /* code */
                    printf("\tPlease select payment method\n");
                    printf("1) Main account\n");
                    printf("2) Mobile Money\n");
                    // break;

            
                    scanf("%d", &user);
                    switch(user){
                        // under option 3
                        case 1 :
                            printf("You have subscribed to 1250mins,1000sms and 1.2GB for K150\n");
                            break;
                        case 2:
                            int pin;
                            printf("Input mobile money pin\n");
                            scanf("%d", &pin);
                            printf("You have subscribed to 1250mins,1000sms and 1.2GB for K150\n");
                            break;
                        default:
                            printf("Subscription cancelled\n");
                            break;
                        }
                        break;
                case 2:
                    printf("Subscription cancelled\n");
                    break;
                }
                break;
            case 99:
                main();
                break;
            }
            break;
        
        case 4:
            /* Ni Yathu Data */
            printf("\tNi Yathu Data\n");
            printf("1) K5- 1GB, 3Days\n");
            printf("2) K15- 2GB, 7Days\n");
            printf("3) K25- 5GB, 7Days\n");
            printf("4) K60- 11GB, 7Days\n");
            printf("press 99 for main menu\n");
            // break;
    
            scanf("%d", &user);
            switch (user){
            case 1:
            /* code */
                printf("Are you sure you want to subscribe 1GB for K5\n");
                printf("1) Yes\n");
                printf("2) No\n");
                // break;
        
                scanf("%d", &user);
                switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            // under option 3
                            case 1 :
                                printf("You have subscribed 1GB for K5\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed 1GB for K5\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                            break;
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                    break;
            case 2:
                printf("Are you sure you want to subscribe 2GB for K15\n");
                printf("1) Yes\n");
                printf("2) No\n");
                // break;
        
                scanf("%d", &user);
                switch (user){
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            case 1 :
                                printf("You have subscribed 2GB for K15\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed 2GB for K15\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                            break;
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                    break;
            case 3:
                printf("Are you sure you want to subscribe 5GB for K25\n");
                printf("1) Yes\n");
                printf("2) No\n");
                // break;
        
                scanf("%d", &user);
                switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            case 1 :
                                printf("You have subscribed 5GB for K25\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed 5GB for K25\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                            break;
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                    break;
            case 4:
                printf("Are you sure you want to subscribe 11GB for K60\n");
                printf("1) Yes\n");
                printf("2) No\n");
                // break;
        
                scanf("%d", &user);
                switch (user){
                        // option 1 of 1 of 1
                    case 1:
                        /* code */
                        printf("\tPlease select payment method\n");
                        printf("1) Main account\n");
                        printf("2) Mobile Money\n");
                        // break;

                
                        scanf("%d", &user);
                        switch(user){
                            case 1 :
                                printf("You have subscribed  11GB for K60\n");
                                break;
                            case 2:
                                int pin;
                                printf("Input mobile money pin\n");
                                scanf("%d", &pin);
                                printf("You have subscribed  11GB for K60\n");
                                break;
                            default:
                                printf("Subscription cancelled\n");
                                break;
                            }
                            break;
                    case 2:
                        printf("Subscription cancelled\n");
                        break;
                    }
                    break;
            case 99:
                main();
                break;
            }
            break;
        case 99:
            /* Ni Yathu Main menu */
            main();
            break;
        }
        break;
    //ALL NET FREEDOM 
    case 4:
        printf("Choose option(All-net Freedom offers)\n");
        printf("1) Freedom Offers\n");
        printf("2) ALL Network Offers\n");
        printf("3) Buy4Other_Mins\n");
        printf("99) Main Menu\n");
        
        scanf("%d", &user);
        switch (user){
            case 1:
                /* code */
                printf("All Network offers\n");
                printf("1) Daily Offers\n");
                printf("2) Weekly Offers\n");
                printf("3) Monthly Offers\n");
                printf("4) Freedom Data\n");
                printf("99) Back\n");

                scanf("%d", &user);
                switch (user){
                    case 1:
                        /* code */
                        printf("Freedom Offers Daily\n");
                        printf("1) K3- 15Mins, 15sms, 15mb\n");
                        printf("2) K5- 28Mins, 30sms, 30mb\n");
                        printf("99) back\n");

                        scanf("%d", &user);
                        switch (user){
                        case 1:
                            printf("Are you sure you want to subscribe K3- 15Mins, 15sms, 15mb Freedom bundle\n");
                            printf("1) Yes\n");
                            printf("2) No\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                    // option 1 of 1 of 1
                                case 1:
                                    /* code */
                                    printf("\tPlease select payment method\n");
                                    printf("1) Main account\n");
                                    printf("2) Mobile Money\n");
                                    // break;

                            
                                    scanf("%d", &user);
                                    switch(user){
                                        case 1 :
                                            printf("You have subscribed  K3- 15Mins, 15sms, 15mb Freedom bundle\n");
                                            break;
                                        case 2:
                                            int pin;
                                            printf("Input mobile money pin\n");
                                            scanf("%d", &pin);
                                            printf("You have subscribed  K3- 15Mins, 15sms, 15mb Freedom bundle\n");
                                            break;
                                        default:
                                            printf("Subscription cancelled\n");
                                            break;
                                        }
                                        break;
                                case 2:
                                    printf("Subscription cancelled\n");
                                    break;
                            }
                                break;
                        case 2:
                            printf("Are you sure you want to subscribe K5- 28Mins, 30sms, 30mb Freedom bundle\n");
                            printf("1) Yes\n");
                            printf("2) No\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                    // option 1 of 1 of 1
                                case 1:
                                    /* code */
                                    printf("\tPlease select payment method\n");
                                    printf("1) Main account\n");
                                    printf("2) Mobile Money\n");
                                    // break;

                                    scanf("%d", &user);
                                    switch(user){
                                        case 1 :
                                            printf("You have subscribed  K5- 28Mins, 30sms, 30mb Freedom bundle\n");
                                            break;
                                        case 2:
                                            int pin;
                                            printf("Input mobile money pin\n");
                                            scanf("%d", &pin);
                                            printf("You have subscribed  K5- 28Mins, 30sms, 30mb Freedom bundle\n");
                                            break;
                                        default:
                                            printf("Subscription cancelled\n");
                                            break;
                                        }
                                        break;
                                case 2:
                                    printf("Subscription cancelled\n");
                                    break;
                                }
                                break;
                        case 99:
                            main();
                            break;
                        }
                        break;
                    case 2:
                        printf("Freedom Offers Weekly\n");
                        printf("1) K5-20 Mins, 50sms, 50mb\n");
                        printf("2) K10-55 Mins, 60sms, 60mb\n");
                        printf("3) K15-100 Mins, 100sms, 100mb\n");
                        printf("99) Back\n");

                        scanf("%d", &user);
                        switch (user){
                            case 1:
                            /* code */
                                printf("Are you sure you want to subscribe K5-20 Mins, 50sms, 50mb Freedom bundle\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K5-20 Mins, 50sms, 50mb Freedom bundle\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K5-20 Mins, 50sms, 50mb Freedom bundle\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 2:
                                printf("Are you sure you want to subscribe K10-55 Mins, 60sms, 60mb Freedom bundle\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K10-55 Mins, 60sms, 60mb Freedom bundle\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K10-55 Mins, 60sms, 60mb Freedom bundle\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 3:
                                printf("Are you sure you want to subscribe K15-100 Mins, 100sms, 100mb Freedom bundle\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K15-100 Mins, 100sms, 100mb Freedom bundle\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K15-100 Mins, 100sms, 100mb Freedom bundle\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 99:
                                main();
                                break;
                        }
                        break;
                    case 3:
                        printf("Freedom Offers Monthly\n");
                        printf("1) K50-200 Mins, 100sms, 100mb\n");
                        printf("2) K100-455 Mins, 150sms, 150mb\n");
                        printf("3) K200-500 Mins, 200sms, 15GB\n");
                        printf("99) Back\n");

                        scanf("%d", &user);
                        switch (user){
                            case 1:
                                /* code */
                                printf("Are you sure you want to subscribe K50-200 Mins, 100sms, 100mb Freedom bundle\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K50-200 Mins, 100sms, 100mb Freedom bundle\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K50-200 Mins, 100sms, 100mb Freedom bundle\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 2:
                                printf("Are you sure you want to subscribe K100-450 Mins, 150sms, 150mb Freedom bundle\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K100-450 Mins, 150sms, 150mb Freedom bundle\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K100-450 Mins, 150sms, 150mb Freedom bundle\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 3:
                                printf("Are you sure you want to subscribe K200-500 Mins, 200sms, 15GB Freedom bundle\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K200-500 Mins, 200sms, 15GB Freedom bundle\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K200-500 Mins, 200sms, 15GB Freedom bundle\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 99:
                                main();
                                break;
                        }
                        break;
                    case 4:
                        printf("Freedom Data\n");
                        printf("1) K5=1GB, 3Days\n");
                        printf("2) K15=2GB, 7Days\n");
                        printf("3) K25=5GB, 7Days\n");
                        printf("\n");
                        printf("99) Back\n");

                        scanf("%d", &user);
                        switch (user){
                            case 1:
                                /* code */
                                printf("Are you sure you want to subscribe K5-1GB for 3Days Freedom bundle\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K5-1GB for 3Days Freedom bundle\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K5-1GB for 3Days Freedom bundle\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 2:
                                printf("Are you sure you want to subscribe K15-2GB for 7Days Freedom bundle\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K15-2GB for 7Days Freedom bundle\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K15-2GB for 7Days Freedom bundle\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 3:
                                printf("Are you sure you want to subscribe K25-5GB for 7Days Freedom bundle\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K25-5GB for 7Days Freedom bundle\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K25-5GB for 7Days Freedom bundle\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                }
                                break;
                            case 99:
                                main();
                                break;
                        }
                        break;
                    case 99:
                        main();
                        break;
                }
                break;
            case 2:
                printf("All Network Offers\n");
                printf("1) Daily Offers\n");
                printf("2) Weekly Offers\n");
                printf("3) Monthly Offers\n");
                printf("99) Back\n");

                scanf("%d", &user);
                switch (user){
                    case 1:
                        /* code */
                        printf("All Networds Daily\n");
                        printf("1) K3-15Mins, 15sms, 15mb\n");
                        printf("2) K5-25Mins, 100sms, 15mb\n");
                        printf("3) K10-50Mins, 100sms, 20m\n");
                        printf("99) Back\n");

                        scanf("%d", &user);
                        switch (user){
                            case 1:
                                /* code */
                                printf("Are you sure you want to subscribe K3-15Mins, 15sms, 15mb All Network Offer?\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K3-15Mins, 15sms, 15mb All Network Offer\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K3-15Mins, 15sms, 15mb All Network Offer\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 2:
                                printf("Are you sure you want to subscribe K5-25Mins, 100sms, 15mb All Network Offer?\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K5-25Mins, 100sms, 15mb All Network Offer?\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K5-25Mins, 100sms, 15mb All Network Offer?\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 3:
                                printf("Are you sure you want to subscribe K10-50Mins, 100sms, 20mb All Network Offer?\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K10-50Mins, 100sms, 20mb All Network Offer?\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K10-50Mins, 100sms, 20mb All Network Offer?\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 99:
                                main();
                                break;
                        }
                        break;
                    
                    case 2:
                        // Weekly offers
                        printf("All Networks Weekly\n");
                        printf("1) K5- 17mins, 50sms, 25mb\n");
                        printf("2) K10- 35mins, 100sms, 50mb\n");
                        printf("3) K20- 85mins, 200sms, 200mb\n");
                        printf("4) K30- 140mins, 200sms, 250mb\n");
                        printf("99) Back\n");

                        scanf("%d", &user);
                        switch (user){
                            case 1:
                                /* code */
                                printf("Are you sure you want to subscribe K5-17Mins, 50sms, 25mb All Network Offer?\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K5-17Mins, 50sms, 25mb All Network Offer?\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K5-17Mins, 50sms, 25mb All Network Offer?\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;            
                            case 2:
                                printf("Are you sure you want to subscribe K10-35Mins, 100sms, 50mb All Network Offer?\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K10-35Mins, 100sms, 50mb All Network Offer?\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K10-35Mins, 100sms, 50mb All Network Offer?\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 3:
                                printf("Are you sure you want to subscribe K20-85Mins, 200sms, 200mb All Network Offer?\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K20-85Mins, 200sms, 200mb All Network Offer?\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K20-85Mins, 200sms, 200mb All Network Offer?\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 4:
                                printf("Are you sure you want to subscribe K30-140Mins, 200sms, 250mb All Network Offer?\n");
                                printf("1) Yes\n");
                                printf("2) No\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                        // option 1 of 1 of 1
                                    case 1:
                                        /* code */
                                        printf("\tPlease select payment method\n");
                                        printf("1) Main account\n");
                                        printf("2) Mobile Money\n");
                                        // break;

                                
                                        scanf("%d", &user);
                                        switch(user){
                                            case 1 :
                                                printf("You have subscribed  K30-140Mins, 200sms, 250mb All Network Offer?\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed  K30-140Mins, 200sms, 250mb All Network Offer?\n");
                                                break;
                                            default:
                                                printf("Subscription cancelled\n");
                                                break;
                                            }
                                            break;
                                    case 2:
                                        printf("Subscription cancelled\n");
                                        break;
                                    }
                                    break;
                            case 99:
                                main();
                                break;
                        }
                        break;
                    case 3:
                    // Montly Offers
                        printf("All Networks Monthly\n");
                        printf("1) K50-200Mins, 250sms, 150mb\n");
                        printf("2) K100-460Mins, 500sms, 200mb\n");
                        printf("3) K150-800Mins, 500sms, 250mb\n");
                        printf("4) K200-1,020Mins, 500sms, 300mb\n");
                        printf("99) Back\n");

                        scanf("%d", &user);
                        switch (user){
                        case 1:
                            /* code */
                            printf("Are you sure you want to subscribe K50-200Mins, 250sms, 150mb All Network Offer?\n");
                            printf("1) Yes\n");
                            printf("2) No\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                    // option 1 of 1 of 1
                                case 1:
                                    /* code */
                                    printf("\tPlease select payment method\n");
                                    printf("1) Main account\n");
                                    printf("2) Mobile Money\n");
                                    // break;

                            
                                    scanf("%d", &user);
                                    switch(user){
                                        case 1 :
                                            printf("You have subscribed  K50-200Mins, 250sms, 150mb All Network Offer?\n");
                                            break;
                                        case 2:
                                            int pin;
                                            printf("Input mobile money pin\n");
                                            scanf("%d", &pin);
                                            printf("You have subscribed  K50-200Mins, 250sms, 150mb All Network Offer?\n");
                                            break;
                                        default:
                                            printf("Subscription cancelled\n");
                                            break;
                                        }
                                        break;
                                case 2:
                                    printf("Subscription cancelled\n");
                                    break;
                                }
                                break;
                        case 2:
                            printf("Are you sure you want to subscribe K100-460Mins, 500sms, 200mb All Network Offer?\n");
                            printf("1) Yes\n");
                            printf("2) No\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                    // option 1 of 1 of 1
                                case 1:
                                    /* code */
                                    printf("\tPlease select payment method\n");
                                    printf("1) Main account\n");
                                    printf("2) Mobile Money\n");
                                    // break;

                            
                                    scanf("%d", &user);
                                    switch(user){
                                        case 1 :
                                            printf("You have subscribed  K100-460Mins, 500sms, 200mb All Network Offer?\n");
                                            break;
                                        case 2:
                                            int pin;
                                            printf("Input mobile money pin\n");
                                            scanf("%d", &pin);
                                            printf("You have subscribed  K100-460Mins, 500sms, 200mb All Network Offer?\n");
                                            break;
                                        default:
                                            printf("Subscription cancelled\n");
                                            break;
                                        }
                                        break;
                                case 2:
                                    printf("Subscription cancelled\n");
                                    break;
                                }
                                break;
                        case 3:
                            printf("Are you sure you want to subscribe K150-800Mins, 500sms, 250mb All Network Offer?\n");
                            printf("1) Yes\n");
                            printf("2) No\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                    // option 1 of 1 of 1
                                case 1:
                                    /* code */
                                    printf("\tPlease select payment method\n");
                                    printf("1) Main account\n");
                                    printf("2) Mobile Money\n");
                                    // break;

                            
                                    scanf("%d", &user);
                                    switch(user){
                                        case 1 :
                                            printf("You have subscribed  K150-800Mins, 500sms, 250mb All Network Offer?\n");
                                            break;
                                        case 2:
                                            int pin;
                                            printf("Input mobile money pin\n");
                                            scanf("%d", &pin);
                                            printf("You have subscribed  K150-800Mins, 500sms, 250mb All Network Offer?\n");
                                            break;
                                        default:
                                            printf("Subscription cancelled\n");
                                            break;
                                    }
                                    break;
                                case 2:
                                    printf("Subscription cancelled\n");
                                    break;
                                }
                                break;
                        case 4:
                            printf("Are you sure you want to subscribe K200-1,020Mins, 500sms, 300mb All Network Offer?\n");
                            printf("1) Yes\n");
                            printf("2) No\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                    // option 1 of 1 of 1
                                case 1:
                                    /* code */
                                    printf("\tPlease select payment method\n");
                                    printf("1) Main account\n");
                                    printf("2) Mobile Money\n");
                                    // break;

                            
                                    scanf("%d", &user);
                                    switch(user){
                                        case 1 :
                                            printf("You have subscribed  K200-1,020Mins, 500sms, 300mb All Network Offer?\n");
                                            break;
                                        case 2:
                                            int pin;
                                            printf("Input mobile money pin\n");
                                            scanf("%d", &pin);
                                            printf("You have subscribed  K200-1,020Mins, 500sms, 300mb All Network Offer?\n");
                                            break;
                                        default:
                                            printf("Subscription cancelled\n");
                                            break;
                                        }
                                        break;
                                case 2:
                                    printf("Subscription cancelled\n");
                                    break;
                                }
                                break;
                        case 99:
                            main();
                            break;
                        }
                        break;
                    case 99:
                        main();
                        break;
                }
                break;
            case 3:
            // BUY4OTHERS
                int receiving_number;
                printf("Enter the receiving phone number(26095********)\n");
                scanf("%d", &receiving_number);
                break;
            case 99:
                main();
                break;
            }
            break;
    case 5:
        //DATA OFFERS
        printf("The Best Offers in Town:\n");
        printf("1) SupaCheza Data\n");
        printf("2) Mobile Data\n");
        printf("3) Velocity\n");
        printf("4) ZamtelHome\n");
        printf("5) Buy4Other\n");
        printf("6) Balance\n");
        printf("7) Other Bundle\n");

        scanf("%d", &user);
        switch (user){
            case 1:
                /* code */
                printf("Welcome to zamtel Offers\n");
                printf("1. Voice Offers\n");
                printf("1. Data Offers\n");

                scanf("%d", &user);
                switch (user){
                    case 1:
                    /* code */
                    printf("\tSupa Cheza\n");
                    printf("1) Daily\n");
                    printf("2) Weekly\n");
                    printf("3) Monthly\n");
                    printf("4) YourGift\n");
                    printf("5) Balance\n");
                    printf("99) Main menu\n");
                    // break;

            
                    scanf("%d", &user);
                    switch (user){
                        case 1:
                            /* code */
                            printf("1) Get 26 OnNet Mins for 24Hours @K2\n");
                            printf("2) Get 41 OnNet Mins for 24Hours @K3\n");
                            printf("99) Main menu\n");
                            // break;

                    
                            scanf("%d", &user);
                            switch (user){
                                case 1:
                                    printf("Choose a Payment Menthod\n");
                                    printf("1) Main Account\n");
                                    printf("2) Mobile Money\n");
                                    printf("99) Main Menu\n");
                                    // break;
                            
                                    scanf("%d", &user);
                                    switch (user){
                                        case 1:
                                            /* code */
                                            printf("You have subscribed to 26 onNet minutes for K2\n");
                                            break;
                                        case 2:
                                            int pin;
                                            printf("Input mobile money pin\n");
                                            scanf("%d", &pin);
                                            printf("You have subscribed to 26 onNet minutes for K2\n");
                                            break;
                                        case 99:
                                            main();
                                            break;
                                    }
                                    break;
                                case 2:
                                    printf("Choose a Payment Menthod\n");
                                    printf("1) Main Account\n");
                                    printf("2) Mobile Money\n");
                                    printf("99) Main Menu\n");
                                    // break;
                            
                                    scanf("%d", &user);
                                    switch (user){
                                        case 1:
                                            /* code */
                                            printf("You have subscribed to 41 onNet minutes for K3\n");
                                            break;
                                        case 2:
                                            int pin;
                                            printf("Input mobile money pin\n");
                                            scanf("%d", &pin);
                                            printf("You have subscribed to 41 onNet minutes for K3\n");
                                            break;
                                        case 99:
                                            main();
                                            break;
                                    }
                                    break;
                                case 99:
                                    main();
                                    break;
                            }
                            break;
                        case 2:
                            /*Supa cheza weekly*/
                            printf("1) Get 44 onNet Mins for 7 Days @ K5\n");
                            printf("2) Get 99 onNet Mins for 7 Days @ K10\n");
                            // break;

                            scanf("%d", &user);
                            switch (user){
                                case 1:
                                printf("Choose a Payment Menthod\n");
                                printf("1) Main Account\n");
                                printf("2) Mobile Money\n");
                                printf("99) Main Menu\n");
                                // break;
                        
                                scanf("%d", &user);
                                switch (user){
                                    case 1:
                                        /* code */
                                        printf("You have subscribed to 44 onNet minutes for K5\n");
                                        break;
                                    case 2:
                                        int pin;
                                        printf("Input mobile money pin\n");
                                        scanf("%d", &pin);
                                        printf("You have subscribed to 99 onNet minutes for K10\n");
                                        break;
                                    case 99:
                                        main();
                                        break;
                                }
                                break;
                            }
                            break;
                        case 3:
                            /* Supa cheza Monthly */
                            printf("1) Get 1200 onNet Mins for 30 Days @ K100\n");
                            printf("99) Main Menu\n");
                            // break;
                    
                            scanf("%d", &user);
                            switch (user){
                                case 1:
                                    printf("Choose a Payment Menthod\n");
                                    printf("1) Main Account\n");
                                    printf("2) Mobile Money\n");
                                    printf("99) Main Menu\n");
                                    // break;
                            
                                    scanf("%d", &user);
                                    switch (user){
                                        case 1:
                                            /* code */
                                            printf("You have subscribed to 1200 onNet minutes for K100\n");
                                            break;
                                        case 2:
                                            int pin;
                                            printf("Input mobile money pin\n");
                                            scanf("%d", &pin);
                                            printf("You have subscribed to 1200 onNet minutes for K100\n");
                                            break;
                                        case 99:
                                            main();
                                            break;
                                    }
                                    break;
                                case 99:
                                    main();
                                    break;
                                }
                                break;
                        case 4:
                        /* Supa cheza YourGift*/
                            printf("you are not eligible for this offer\n");
                            break;
                        case 5:
                            /* Supa cheza Balance */
                            printf("your balance is xxxxx");
                            printf("Thank you for using Zamtel\n");
                            break;
                        
                        case 99:
                        /* Main menu*/
                            main();
                            break;
                        }
                        break;
                    case 2:
                        /*CHEZA Data Offers*/
                        printf("SUPA Cheza\n");
                        printf("1) Daily\n");
                        printf("2) Weekly\n");
                        printf("3) Monthly\n");
                        printf("4) YourGift\n");
                        printf("5) Balance\n");
                        printf("99) Main Menu\n");

                        scanf("%d", &user);
                        switch (user){
                            case 1:
                                /* code */
                                printf("\tSupa Cheza\n");
                                printf("1) Get 1.1 GB Data for 24Hrs @ K5\n");
                                printf("2) Get 3 GB Data for 24Hrs @ K10\n");
                                printf("\n");
                                printf("99) Main Menu\n");

                                scanf("%d", &user);
                                switch (user){
                                    case 1:
                                        /* code */
                                        printf("Choose a Payment Menthod\n");
                                        printf("1) Main Account\n");
                                        printf("2) Mobile Money\n");
                                        printf("99) Main Menu\n");
                                        // break;

                                        scanf("%d", &user);
                                        switch (user){
                                            case 1:
                                                /* code */
                                                printf("You have subscribed to 1.1 GB Data for K5\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed to 1.1 GB Data for K5\n");
                                                break;
                                            case 99:
                                                main();
                                                break;
                                        }
                                        break;
                                    case 2:
                                        printf("Choose a Payment Menthod\n");
                                        printf("1) Main Account\n");
                                        printf("2) Mobile Money\n");
                                        printf("99) Main Menu\n");
                                        // break;

                                        scanf("%d", &user);
                                        switch (user){
                                            case 1:
                                                /* code */
                                                printf("You have subscribed to 3 GB Data for K10\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed to 3 GB Data for K10\n");
                                                break;
                                            case 99:
                                                main();
                                                break;
                                        }
                                        break;
                                    case 99:
                                        main();
                                        break;
                                }
                                break;
                            case 2:
                                printf("\tSupa Cheza\n");
                                printf("1) Get 6 GB Data for 7 Days @ K20\n");
                                printf("\n");
                                printf("99) Main Menu\n");

                                scanf("%d", &user);
                                switch (user){
                                    case 1:
                                        /* code */
                                        printf("Choose a Payment Menthod\n");
                                        printf("1) Main Account\n");
                                        printf("2) Mobile Money\n");
                                        printf("99) Main Menu\n");
                                        // break;

                                        scanf("%d", &user);
                                        switch (user){
                                            case 1:
                                                /* code */
                                                printf("You have subscribed to 6 GB Data for K20\n");
                                                break;
                                            case 2:
                                                int pin;
                                                printf("Input mobile money pin\n");
                                                scanf("%d", &pin);
                                                printf("You have subscribed to 6 GB Data for K20\n");
                                                break;
                                            case 99:
                                                main();
                                                break;
                                        }
                                        break;
                                    case 99:
                                        main();
                                        break;
                                }
                                break;
                            case 3:
                                /* code */
                                break;
                            
                            case 4:
                                break;
                            case 5:
                                /* code */
                                break;
                            
                            case 99:
                                break;
                        }
                        break;
                }
                break;
            
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
        }
        break;
    case 6:
    // Balance 
        break;
    case 7:
    // Today's Special
        break;
    case 8:
    // Velocity Lite
        break;
    case 9:
    // Buy4Other
        break;
    }
    return 0;
}
