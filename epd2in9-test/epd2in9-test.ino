/* Includes ------------------------------------------------------------------*/
#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include "ImageData.h"
#include <stdlib.h>

/* Entry point ----------------------------------------------------------------*/
void setup()
{
  printf("EPD_2IN9_test Demo\r\n");
  DEV_Module_Init();

    printf("e-Paper Init and Clear...\r\n");
    EPD_2IN9_Init(EPD_2IN9_FULL);
    EPD_2IN9_Clear();
}

/* The main loop -------------------------------------------------------------*/
void loop()
{
  //
}
