/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 *
 * THIS IS AN AUTOMATICALLY GENERATED FILE - DO NOT EDIT!
 */

#pragma once

// ensure the MCU series is correct
#ifndef STM32PLUS_F4
#error This class can only be used with the STM32F4 series
#endif

namespace stm32plus {


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM5_CH1_IN {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_0,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER5>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER5,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM5_CH1_OUT {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_0,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER5>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER5,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM5_CH2_IN {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_1,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER5>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER5,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM5_CH2_OUT {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_1,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER5>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER5,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM5_CH3_IN {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_2,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER5>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER5,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM5_CH3_OUT {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_2,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER5>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER5,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM5_CH4_IN {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_3,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER5>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER5,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };


  /**
   * Initialise GPIO pins for this timer GPIO mode
   * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
   */

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM5_CH4_OUT {

    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,NULL,NULL,NULL };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_3,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER5>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER5,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF);
    }
  };

  /**
   * Timer feature to enable any number of the GPIO alternate function outputs.
   * All remap levels are supported. An example declaration could be:
   *
   * Timer5GpioFeature<REMAP_NONE,TIM5_CH1_OUT>
   */

  template<TimerGpioRemapLevel TRemapLevel,template<TimerGpioRemapLevel> class TF0=NullTimerGpio,template<TimerGpioRemapLevel> class TF1=NullTimerGpio,template<TimerGpioRemapLevel> class TF2=NullTimerGpio,template<TimerGpioRemapLevel> class TF3=NullTimerGpio>
  struct Timer5GpioFeature;


  template<template<TimerGpioRemapLevel> class TF0,template<TimerGpioRemapLevel> class TF1,template<TimerGpioRemapLevel> class TF2,template<TimerGpioRemapLevel> class TF3>
  struct Timer5GpioFeature<TIMER_REMAP_NONE,TF0,TF1,TF2,TF3> : public TimerFeatureBase {
    Timer5GpioFeature(Timer& timer) : TimerFeatureBase(timer) {
      TF0<TIMER_REMAP_NONE>::initialise();
      TF1<TIMER_REMAP_NONE>::initialise();
      TF2<TIMER_REMAP_NONE>::initialise();
      TF3<TIMER_REMAP_NONE>::initialise();
    }
  };
}
