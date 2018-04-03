#ifndef _CONFIGPIN_H
#define _CONFIGPIN_H
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Входа контроллера
#define inductive_sensor1 A6          //Вход индуктивного датчика №1  (60)
#define inductive_sensor2 A7          //Вход индуктивного датчика №2  (61)
#define inductive_sensor3 A8          //Вход индуктивного датчика №3  (62)

// Выход на АСУ ТП
#define out_asu_tp1 42                //Выход на АСУ ТП №1
#define out_asu_tp2 43                //Выход на АСУ ТП №2
#define out_asu_tp3 44                //Выход на АСУ ТП №3
#define out_asu_tp4 50                //Выход на АСУ ТП №4

// Вход токового трансформатора
#define current_transformer1  A5      // Вход токового трансформатора №1
#define current_transformer2  A4      // Вход токового трансформатора №2
#define current_transformer3  A3      // Вход токового трансформатора №3

// CAN шина
#define ID0_Out 45                   //         
#define ID1_Out 46                   //
#define IDE0_In 47                   //
#define IDE1_In 48                   //
#define PPS_Out 49                   //

// Контроль источников питания
#define power_200  A9                // Контроль источника питания 200в
#define power_3V3  A10               // Контроль источника питания +3.3в
#define power_5V0  A11               // Контроль источника питания +5.0в


// RS485
#define Upr_RS485  51                // Вход управлениея шиной RS485  



#define SD_CS_PIN 10                 // пин CS для SD-карты

#define TFT_reset 34                 // Назначение pin сброса TFT дисплея.


#define ROD_POSITION_PIN1 11          // Вход для чтения позиции штанги №1
#define ROD_POSITION_PIN2 12          // Вход для чтения позиции штанги №2

#define ROD_POSITION_TRIGGERED LOW // уровень, когда датчик позиции штанги сработал

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef enum
{
  rpBroken, // штанга поломана и находится в промежуточной позиции
  rpUp, // в верхней позиции
  rpDown // в нижней позиции
} RodPosition; // позиция штанги
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class ConfigPin;
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class ConfigPin
{

public:
  ConfigPin();
  static void setup();

  // возвращает true, если штанга в верхнем положении, false - если штанга в нижнем положении
  static RodPosition getRodPosition();

 
private:


};
//--------------------------------------------------------------------------------------------------------------------------------------

#endif
