/*
 * denko 電光掲示板のピン増やす目的のやつで使用
 * denko 基板のU63 マイコンに書き込む
 */

#include <ch32v20x.h>
#include "ch32v203_GPIO_mylib.h"
#include "dneko63.h"

void osc_144MHz_init(void);

int main(void) {
    osc_144MHz_init();

    GPIOA_init();
    GPIOB_init();
    GPIOD_init();

    RCC->APB2PCENR |= RCC_AFIOEN; //AFIO有効

    AFIO->PCFR1 |= AFIO_PCFR1_PD01_REMAP; //PD0/PD1をGPIOとして使う

    GPIO_output_speed(OUTPUT_50MHz);

    pinMode(COL11_SIG, OUTPUT);
    pinMode(COL8_SIG, OUTPUT);
    pinMode(COL5_SIG, OUTPUT);
    pinMode(COL2_SIG, OUTPUT);
    pinMode(COL31_SIG, OUTPUT);
    pinMode(COL28_SIG, OUTPUT);
    pinMode(COL25_SIG, OUTPUT);
    pinMode(COL22_SIG, OUTPUT);
    pinMode(COL13_SIG, OUTPUT);
    pinMode(COL10_SIG, OUTPUT);
    pinMode(COL7_SIG, OUTPUT);
    pinMode(COL4_SIG, OUTPUT);
    pinMode(COL1_SIG, OUTPUT);
    pinMode(COL17_SIG, OUTPUT);
    pinMode(COL14_SIG, OUTPUT);
    pinMode(COL19_SIG, OUTPUT);
    pinMode(COL16_SIG, OUTPUT);

    pinMode(COL1_DATA, INPUT);
    pinMode(COL2_DATA, INPUT);
    pinMode(COL4_DATA, INPUT);
    pinMode(COL8_DATA, INPUT);
    pinMode(COL16_DATA, INPUT);
    pinMode(COL32_DATA, INPUT);
    pinMode(COL_OE, INPUT);

    while(1) {

        int data1 = digitalRead(COL1_DATA);
        int data2 = digitalRead(COL2_DATA);
        int data4 = digitalRead(COL4_DATA);
        int data8 = digitalRead(COL8_DATA);
        int data16 = digitalRead(COL16_DATA);
        int data32 = digitalRead(COL32_DATA);
        int data_oe = digitalRead(COL_OE);

        //1
        if (data32 == 0 && data16 == 0 && data8 == 0 && data4 == 0 && data2 == 0
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL1_SIG, 1);
        } else {
            digitalWrite(COL1_SIG, 0);
        }

        //2
        if (data32 == 0 && data16 == 0 && data8 == 0 && data4 == 0 && data2 == 1
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL2_SIG, 1);
        } else {
            digitalWrite(COL2_SIG, 0);
        }

        //4
        if (data32 == 0 && data16 == 0 && data8 == 0 && data4 == 1 && data2 == 0
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL4_SIG, 1);
        } else {
            digitalWrite(COL4_SIG, 0);
        }

        //5
        if (data32 == 0 && data16 == 0 && data8 == 0 && data4 == 1 && data2 == 0
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL5_SIG, 1);
        } else {
            digitalWrite(COL5_SIG, 0);
        }

        //7
        if (data32 == 0 && data16 == 0 && data8 == 0 && data4 == 1 && data2 == 1
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL7_SIG, 1);
        } else {
            digitalWrite(COL7_SIG, 0);
        }

        //8
        if (data32 == 0 && data16 == 0 && data8 == 1 && data4 == 0 && data2 == 0
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL8_SIG, 1);
        } else {
            digitalWrite(COL8_SIG, 0);
        }

        //10
        if (data32 == 0 && data16 == 0 && data8 == 1 && data4 == 0 && data2 == 1
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL10_SIG, 1);
        } else {
            digitalWrite(COL10_SIG, 0);
        }

        //11
        if (data32 == 0 && data16 == 0 && data8 == 1 && data4 == 0 && data2 == 1
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL11_SIG, 1);
        } else {
            digitalWrite(COL11_SIG, 0);
        }

        //13
        if (data32 == 0 && data16 == 0 && data8 == 1 && data4 == 1 && data2 == 0
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL13_SIG, 1);
        } else {
            digitalWrite(COL13_SIG, 0);
        }

        //14
        if (data32 == 0 && data16 == 0 && data8 == 1 && data4 == 1 && data2 == 1
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL14_SIG, 1);
        } else {
            digitalWrite(COL14_SIG, 0);
        }

        //16
        if (data32 == 0 && data16 == 1 && data8 == 0 && data4 == 0 && data2 == 0
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL16_SIG, 1);
        } else {
            digitalWrite(COL16_SIG, 0);
        }

        //17
        if (data32 == 0 && data16 == 1 && data8 == 0 && data4 == 0 && data2 == 0
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL17_SIG, 1);
        } else {
            digitalWrite(COL17_SIG, 0);
        }

        //19
        if (data32 == 0 && data16 == 1 && data8 == 0 && data4 == 0 && data2 == 1
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL19_SIG, 1);
        } else {
            digitalWrite(COL19_SIG, 0);
        }

        //22
        if (data32 == 0 && data16 == 1 && data8 == 0 && data4 == 1 && data2 == 1
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL22_SIG, 1);
        } else {
            digitalWrite(COL22_SIG, 0);
        }
        //25
        if (data32 == 0 && data16 == 1 && data8 == 1 && data4 == 0 && data2 == 0
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL25_SIG, 1);
        } else {
            digitalWrite(COL25_SIG, 0);
        }
        //28
        if (data32 == 0 && data16 == 1 && data8 == 1 && data4 == 1 && data2 == 0
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL28_SIG, 1);
        } else {
            digitalWrite(COL28_SIG, 0);
        }

        //31
        if (data32 == 0 && data16 == 1 && data8 == 1 && data4 == 1 && data2 == 1
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL31_SIG, 1);
        } else {
            digitalWrite(COL31_SIG, 0);
        }

        if(data32 == 1){
            asm("NOP");
        }
    }
}

//HSI(8MHz)を使用
//PLL x18により
//SYSCLK　144MHz
//HCLK 144MHz
//APB1 144MHz
//APB2 144MHz
//ADC 72MHz
//(状況により変更あり)
void osc_144MHz_init(void) {
    //PLL x18に設定
    RCC->CFGR0 |= (1 << 21);
    RCC->CFGR0 |= (1 << 20);
    RCC->CFGR0 |= (1 << 19);
    RCC->CFGR0 |= (1 << 18);

    //PLL HSI->そのまま入力 (/2しない)
    EXTEN->EXTEN_CTR |= (1 << 4);

    //PLL有効　(input clock x 18)
    RCC->CTLR |= (1 << 24);

    //PLLがReadyになるまで待機
    while((RCC->CTLR & (1 << 25)) == 0);

    //システムクロックをPLL入力にセット
    RCC->CFGR0 |= (1 << 1);
}
