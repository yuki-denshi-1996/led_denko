/*
 * denko 電光掲示板のピン増やす目的のやつで使用
 * denko 基板のU68 マイコンに書き込む
 */

#include <ch32v20x.h>
#include "ch32v203_GPIO_mylib.h"
#include "denko_u68.h"

void osc_144MHz_init(void);

int main(void) {
    osc_144MHz_init();

    GPIOA_init();
    GPIOB_init();
    GPIOD_init();

    RCC->APB2PCENR |= RCC_AFIOEN; //AFIO有効

    AFIO->PCFR1 |= AFIO_PCFR1_PD01_REMAP; //PD0/PD1をGPIOとして使う

    GPIO_output_speed(OUTPUT_50MHz);

    pinMode(COL30_SIG, OUTPUT);
    pinMode(COL27_SIG, OUTPUT);
    pinMode(COL24_SIG, OUTPUT);
    pinMode(COL21_SIG, OUTPUT);
    pinMode(COL18_SIG, OUTPUT);
    pinMode(COL15_SIG, OUTPUT);
    pinMode(COL12_SIG, OUTPUT);
    pinMode(COL9_SIG, OUTPUT);
    pinMode(COL32_SIG, OUTPUT);
    pinMode(COL29_SIG, OUTPUT);
    pinMode(COL26_SIG, OUTPUT);
    pinMode(COL23_SIG, OUTPUT);
    pinMode(COL20_SIG, OUTPUT);
    pinMode(COL6_SIG, OUTPUT);
    pinMode(COL3_SIG, OUTPUT);

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

        //3
        if (data32 == 0 && data16 == 0 && data8 == 0 && data4 == 0 && data2 == 1
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL3_SIG, 1);
        } else {
            digitalWrite(COL3_SIG, 0);
        }

        //6
        if (data32 == 0 && data16 == 0 && data8 == 0 && data4 == 1 && data2 == 1
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL6_SIG, 1);
        } else {
            digitalWrite(COL6_SIG, 0);
        }

        //9
        if (data32 == 0 && data16 == 0 && data8 == 1 && data4 == 0 && data2 == 0
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL9_SIG, 1);
        } else {
            digitalWrite(COL9_SIG, 0);
        }

        //12
        if (data32 == 0 && data16 == 0 && data8 == 1 && data4 == 1 && data2 == 0
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL12_SIG, 1);
        } else {
            digitalWrite(COL12_SIG, 0);
        }

        //15
        if (data32 == 0 && data16 == 0 && data8 == 1 && data4 == 1 && data2 == 1
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL15_SIG, 1);
        } else {
            digitalWrite(COL15_SIG, 0);
        }

        //18
        if (data32 == 0 && data16 == 1 && data8 == 0 && data4 == 0 && data2 == 1
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL18_SIG, 1);
        } else {
            digitalWrite(COL18_SIG, 0);
        }

        //20
        if (data32 == 0 && data16 == 1 && data8 == 0 && data4 == 1 && data2 == 0
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL20_SIG, 1);
        } else {
            digitalWrite(COL20_SIG, 0);
        }

        //21
        if (data32 == 0 && data16 == 1 && data8 == 0 && data4 == 1 && data2 == 0
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL21_SIG, 1);
        } else {
            digitalWrite(COL21_SIG, 0);
        }

        //23
        if (data32 == 0 && data16 == 1 && data8 == 0 && data4 == 1 && data2 == 1
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL23_SIG, 1);
        } else {
            digitalWrite(COL23_SIG, 0);
        }

        //24
        if (data32 == 0 && data16 == 1 && data8 == 1 && data4 == 0 && data2 == 0
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL24_SIG, 1);
        } else {
            digitalWrite(COL24_SIG, 0);
        }

        //26
        if (data32 == 0 && data16 == 1 && data8 == 1 && data4 == 0 && data2 == 1
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL26_SIG, 1);
        } else {
            digitalWrite(COL26_SIG, 0);
        }

        //27
        if (data32 == 0 && data16 == 1 && data8 == 1 && data4 == 0 && data2 == 1
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL27_SIG, 1);
        } else {
            digitalWrite(COL27_SIG, 0);
        }

        //29
        if (data32 == 0 && data16 == 1 && data8 == 1 && data4 == 1 && data2 == 0
                && data1 == 1 && data_oe == 1) {
            digitalWrite(COL29_SIG, 1);
        } else {
            digitalWrite(COL29_SIG, 0);
        }

        //30
        if (data32 == 0 && data16 == 1 && data8 == 1 && data4 == 1 && data2 == 1
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL30_SIG, 1);
        } else {
            digitalWrite(COL30_SIG, 0);
        }
        //32
        if (data32 == 0 && data16 == 0 && data8 == 0 && data4 == 0 && data2 == 0
                && data1 == 0 && data_oe == 1) {
            digitalWrite(COL32_SIG, 1);
        } else {
            digitalWrite(COL32_SIG, 0);
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
