/**
 * @file bluetooth.h
 * @author Rafael Corsi Gabriel Rios e Gabriela Almeida
 * @date 26/04/2017
 * @brief Fun��es para configurar o Bluetooth
 */

#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include "asf.h"
/**
 * @brief STDINT possui as defini��es dos tipos de vari�veis
 * e constantes
 */
#include <stdint.h>

/**
 * @brief Inclui as defini��es pr�vias do uc em uso
 */
#include <same70.h>


/**
 * \brief Configure UART console.
 */
 void USART0_init(void);
 


/**
 *  Envia para o UART uma string
 */
uint32_t usart_putString(uint8_t *pstring);

/*
 * Busca do UART uma string
 */
uint32_t usart_getString(uint8_t *pstring);

#endif /* BLUETOOTH_H */