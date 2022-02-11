#include <bits/stdc++.h>
            using namespace std;
            class node
            {   public:
                int n;
                node *next;
                node(int a)
                {
                    n=a;
                    next=NULL;
                }
            };
            
            int  main()
            {
              node t1(4),t2(5);
                t1.next=&t2;
            node *head=&t1;

               while(head)
               {
                       cout<<head->n;
                       head=head->next;
               }

            }