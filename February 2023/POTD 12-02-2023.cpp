class Solution

{

public:

    Node *primeList(Node *head)

    {

        int a[10009] ={0};

        vector<int>v;

        for (int i = 2; i <= 10008; i++)

        {

            if (a[i] == 0)

            {

                 v.push_back(i);

                for (int j = i; j <= 10008; j += i) a[j] = 1;

            }

        }

        Node *f = head;

        while (f != NULL)

        {

            auto r = lower_bound(v.begin(),v.end(),f->val);

            if(f->val==1) f->val=2;

            else{

            if((*r)!=f->val){

               int j=(f->val)-(*(--r));

               int k=(*(++r))-(f->val);

                if(j>k)  f->val=*r;

                else  f->val=*(--r);

            }}

            f=f->next;

        }

   return head; }

};
