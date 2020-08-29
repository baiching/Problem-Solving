#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int duration, t, count, index, n, f;
    float loan_amount, downpay_per_month, percentage, cars_current_value, changed_after_downpay, installment;

    while(scanf("%d %f %f %d", &duration, &downpay_per_month, &loan_amount, &t) && duration >= 0){
        float percents[1000] = {};
        cars_current_value = changed_after_downpay = loan_amount;
        installment = loan_amount / duration;

        for(int i = 0; i < t; i++){
            scanf("%d %f", &index, &percentage);
            percents[index] = percentage;
        }

        cars_current_value = (loan_amount + downpay_per_month);
        for(int i = 0; i <= duration; i++){
            if (!percents[i])
            {
                percents[i] = percents[i-1];
            }
            cars_current_value = cars_current_value * (1 - percents[i]);
            if(changed_after_downpay <= cars_current_value) {
                printf("%d %s%s\n", i, "month", (i != 1) ? "s" : "");
                break;
            }
            changed_after_downpay -= installment;
        }
    }

    return 0;
}
