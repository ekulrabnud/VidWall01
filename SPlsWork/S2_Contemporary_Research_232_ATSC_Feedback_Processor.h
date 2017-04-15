#ifndef __S2_CONTEMPORARY_RESEARCH_232_ATSC_FEEDBACK_PROCESSOR_H__
#define __S2_CONTEMPORARY_RESEARCH_232_ATSC_FEEDBACK_PROCESSOR_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_PARAMETERIZED_UNIT_ID_ANALOG_INPUT 1


#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_FROM_DEVICE_BUFFER_INPUT 0
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_FROM_DEVICE_BUFFER_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __FROM_DEVICE, __S2_Contemporary_Research_232_ATSC_Feedback_Processor_FROM_DEVICE_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_POWER_STATUS_ANALOG_ANALOG_OUTPUT 0
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_AUDIO_STATUS_POWER_ANALOG_ANALOG_OUTPUT 1
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_VOLUME_ACTUAL_ANALOG_ANALOG_OUTPUT 3
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_VOLUME_MUTE_STATUS_ANALOG_ANALOG_OUTPUT 4
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_CC_STATUS_ANALOG_ANALOG_OUTPUT 5
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_CC_TYPE_ANALOG_ANALOG_OUTPUT 6
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_VIDEO_DETECT_ANALOG_ANALOG_OUTPUT 7
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_AV_DETECT_ANALOG_ANALOG_OUTPUT 8
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_LABEL_ANALOG_ANALOG_OUTPUT 9
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_IR_STATUS_ANALOG_ANALOG_OUTPUT 10
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_DIGITAL_CC_ANALOG_ANALOG_OUTPUT 11
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_VIDEO_MUTE_STATUS_ANALOG_ANALOG_OUTPUT 12
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_INPUT_RF_ANALOG_ANALOG_OUTPUT 13
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_RF_STATUS_ANALOG_ANALOG_OUTPUT 14
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_RECEIVED_RESOLUTION_ANALOG_ANALOG_OUTPUT 15
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_OUTPUT_ANALOG_ANALOG_OUTPUT 16
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_OUTPUT_RESOLUTION_ANALOG_ANALOG_OUTPUT 17
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_OUTPUT_SETTING_ANALOG_ANALOG_OUTPUT 18
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_F_PANEL_LOCK_ANALOG_ANALOG_OUTPUT 19

#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_CHANNEL_TEXT_STRING_OUTPUT 2


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_STEMP_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __STEMP, __S2_Contemporary_Research_232_ATSC_Feedback_Processor_STEMP_STRING_MAX_LEN );
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_STEMP1_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __STEMP1, __S2_Contemporary_Research_232_ATSC_Feedback_Processor_STEMP1_STRING_MAX_LEN );
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_SUNIT_RESPONSE_T_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __SUNIT_RESPONSE_T, __S2_Contemporary_Research_232_ATSC_Feedback_Processor_SUNIT_RESPONSE_T_STRING_MAX_LEN );
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_SUNIT_RESPONSE_V_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __SUNIT_RESPONSE_V, __S2_Contemporary_Research_232_ATSC_Feedback_Processor_SUNIT_RESPONSE_V_STRING_MAX_LEN );
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_SUNIT_RESPONSE_S_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __SUNIT_RESPONSE_S, __S2_Contemporary_Research_232_ATSC_Feedback_Processor_SUNIT_RESPONSE_S_STRING_MAX_LEN );
#define __S2_Contemporary_Research_232_ATSC_Feedback_Processor_SUNIT_RESPONSE_Q_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __SUNIT_RESPONSE_Q, __S2_Contemporary_Research_232_ATSC_Feedback_Processor_SUNIT_RESPONSE_Q_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __ITEMP;
   unsigned short __IFLAG1;
   unsigned short __CH_SRC_MAJ_CH_ANALOG;
   unsigned short __CH_SRC_MIN_CH_ANALOG;
   DECLARE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __STEMP );
   DECLARE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __STEMP1 );
   DECLARE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __SUNIT_RESPONSE_T );
   DECLARE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __SUNIT_RESPONSE_V );
   DECLARE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __SUNIT_RESPONSE_S );
   DECLARE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __SUNIT_RESPONSE_Q );
   DECLARE_STRING_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor, __FROM_DEVICE );
};

START_NVRAM_VAR_STRUCT( S2_Contemporary_Research_232_ATSC_Feedback_Processor )
{
};



#endif //__S2_CONTEMPORARY_RESEARCH_232_ATSC_FEEDBACK_PROCESSOR_H__

