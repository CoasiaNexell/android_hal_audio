
/* Alango VCP8 Acoustic Configuration Profile                                 */
/*                                                                            */
/* -------------------------------------------------------------------------- */
/* This file is generated by VCP Configurator tool.  It is not recommended to */
/* introduce any manual changes into this file. Use VCP Configurator instead! */
/* -------------------------------------------------------------------------- */
/* Profile definitions for VCP8                                               */
/* Profile version: 52                                                        */
/* Created by VCP8-config revision: 18040511/1415                             */

#include "spf-postapi.h"

static vcp_profile_general_t p_gen = { /*** General profile */
  0x0034,  /*                  VER = 52           VCP profile version [int] */
  0x3e80,  /*                  FSF = 16000        Sampling frequency [Hz] [int] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) , /*          VCP_LIGHT = Off          VCP build version */
  0x0080,  /*                FRLEN = 128          Processing frame length [smpl] [int] */
  0x1f40,  /*                  LPF = 8000         Last Processing frequency [Hz] [int] */
  0x0800,  /*                TX_IG = 0            TX digital input gain applied right at input [dB] [dB] */
  0x0800,  /*                RX_IG = 0            RX digital input gain applied right at input [dB] [dB] */
  0x0800,  /*                TX_OG = 0            TX digital output gain applied right at output [dB] [dB] */
  0x0800,  /*                RX_OG = 0            RX digital output gain applied right at output [dB] [dB] */
  0x0000,  /*                  STG = -96          Side Tone Gain [dB] [dB] */
  0x0000,  /*                  RPD = 0.0          Reference to primary delay [ms] [flt] */
  0x0100,  /*          TX_REFG_NOM = 0            Nominal gain for the AEC Reference signal [dB] [dB] */
  0x63ff,  /*          TX_REFG_MAX = 40           Maximal gain for the AEC Reference signal [dB] [dB] */
  0x0100,  /*          TX_VVOL_NOM = 0            Virtual volume level corresponding to the nominal reference gain [dB] [dB] */
  0x0100,  /*              TX_VVOL = 0            Current virtual volume level [dB] [dB] */
  0x7fff,  /*              TX_GMNR = 0            TX Global Maximal Noise Reduction [dB] [dB] */
  0x7fff,  /*              RX_GMNR = 0            RX Global Maximal Noise Reduction [dB] [dB] */
  0x1b5c,  /*                 DATE = 0x1b5c       DAYS since 1st Jan 2000 */
  0x038d,  /*                 TIME = 0x038d       MINUTES since 00:00 */
  0x83e8,  /*                  CRC = 0x83e8       CRC for all parameters [CRC is normally HEX] */
}; /**** static vcp_profile_general_t p_gen */

static vcp_profile_ns2_t p_tx_ns2 = { /*** TX NS2 */
  0x0000,  /*           TX_NS2_BPS = Normal       TX NS bypass options */
  0x0000,  /*           TX_NS2_FPF = 0            First (bottom) processed frequency [Hz] [int] */
  0x1f40,  /*           TX_NS2_LPF = 8000         Last (top) processed frequency [Hz] [int] */
  0x0dac,  /*           TX_NS2_HRF = 3500         High resolution upper frequency [Hz] [int] */
  0xfff7,  /*           TX_NS2_SNS = -9           Stationary noise suppression gain [dB] [int] */
  0xffa0,  /*          TX_NS2_MING = -96          Minimal allowed total noise suppression gain [dB] [int] */
  0xfffd,  /*         TX_NS2_WBNGG = -3           Wideband noise gate gain [dB] [int] */
  0x0000,  /*            TX_NS2_TC = 0            Tone control threshold (> 0 - suppression, < 0 - attenuation), [dB] [int] */
  0xfff7,  /*          TX_NS2_GDNR = -9           Minimal allowed AGC-depended NR gain auto-correction [dB] [int] */
  0xfff4,  /*      TX_NS2_BNL_MING = -12          Minimal allowed NR gain correction by BNL [dB] [int] */
  0x0006,  /*        TX_NS2_BNL_EF = 6            BNL spectrum curvature factor (lower -> more flat) [dB] [int] */
  0x0000,  /*       TX_NS2_BNL_HIT = 0            BNL high threshold (subband NR gain increases above it) [dB] [int] */
  0x5fff,  /*       TX_NS2_BNL_HIS = 0.7500       BNL high threshold slope [frac] [flt] */
  0xffa0,  /*       TX_NS2_BNL_LOT = -96          BNL low threshold (subband NR gain is 0 dB below it) [dB] [int] */
  0x3fff,  /*       TX_NS2_BNL_LOS = 0.5000       BNL low threshold slope [frac] [flt] */
  0x02bc,  /*          TX_NS2_SNAT = 700          Stationary noise adaptation time [ms] [int] */
  0x0064,  /*          TX_NS2_TNAT = 100          Transient noise adaptation time [ms] [int] */
  0x0bb8,  /*          TX_NS2_SPAT = 3000         Speech noise adaptation time [ms] [int] */
  0x0000,  /*          TX_NS2_NTF1 = 0.0          Sensitivity to signal at low frequencies [frac] [flt] */
  0x0000,  /*          TX_NS2_NTF2 = 0.0          Sensitivity to signal at high frequencies [frac] [flt] */
  0xfffa,  /*          TX_NS2_LFNF = -6           Low frequency noise flattering minimal gain [dB] [int] */
  0x3fff,  /*           TX_NS2_NSS = 0.5000       NS smoothness [frac] [flt] */
  0x0000,  /*           TX_NS2_LAT = 0            NS look ahead time, frames [int] [int] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) , /*    TX_NS2_WNR_FLAG = Off          Single-channel Wind Noise Reduction (WNR) [flag] */
  0x3fff,  /*       TX_NS2_WNR_STR = 0.5000       Wind noise reduction strength [frac] [flt] */
  0xfff1,  /*      TX_NS2_WNR_MATT = -15          Wind noise reduction minimal attenuation [dB] [int] */
  0x0000,  /*       TX_NS2_WNR_THR = 0            Wind noise reduction threshold [dB] [int] */
  0x01f4,  /*        TX_NS2_WNR_IT = 500          Wind confirmation increase time, ms [int] [int] */
  0x1770,  /*        TX_NS2_WNR_DT = 6000         Wind confirmation decrease time, ms [int] [int] */
  0x0000,  /*      TX_NS2_CNG_MODE = 0            Comfort noise generation work mode 0,1,2 [int] [int] */
  0x7332,  /*      TX_NS2_CNG_CUTG = 0.9000       Comfort noise generation gain cut level [frac] [flt] */
}; /**** static vcp_profile_ns2_t p_tx_ns2 */

static vcp_profile_eq_t p_tx_ns2_snsg_eq = { /*** TX SNS EQ */
  0x0000,   /* Num entries = 0 */
  0x0000,   /*     EQ type = 0 */
  {
   0x0000, 0x0000    /*     0.00 Hz -> -72.0 dB */
  }
}; /**** static vcp_profile_eq_t p_tx_ns2_snsg_eq */

static vcp_profile_eq_t p_tx_ns2_bnlh_eq = { /*** TX BNLH EQ */
  0x0000,   /* Num entries = 0 */
  0x0000,   /*     EQ type = 0 */
  {
   0x0000, 0x0000    /*     0.00 Hz -> -72.0 dB */
  }
}; /**** static vcp_profile_eq_t p_tx_ns2_bnlh_eq */

static vcp_profile_eq_t p_tx_ns2_ming_eq = { /*** TX MING EQ */
  0x0000,   /* Num entries = 0 */
  0x0000,   /*     EQ type = 0 */
  {
   0x0000, 0x0000    /*     0.00 Hz -> -72.0 dB */
  }
}; /**** static vcp_profile_eq_t p_tx_ns2_ming_eq */

static vcp_profile_eq_t p_tx_eq = { /*** TX EQ */
  0x0004,   /* Num entries = 4 */
  0x0000,   /*     EQ type = 0 */
  {
   0x00fa, 0x03c9,   /*    62.50 Hz -> -6.5  dB */
   0x7c06, 0x0800    /*  7937.50 Hz -> +0.0  dB */
  }
}; /**** static vcp_profile_eq_t p_tx_eq */

static vcp_profile_agc_t p_tx_agc = { /*** TX AGC/DRC */
  0x0000,  /*           TX_DRC_BPS = Normal       Bypass modes */
  0x0080,  /*          TX_DRC1_SAT = -6           TX DRC1 saturation (limiting) level (SAT < 0 dB) or const gain (SAT > 0 dB) [dB] [dB] */
  0x0000,  /*           TX_DRC1_SL = -96          TX DRC1 input 'signal' level [dB] [dB] */
  0x0000,  /*           TX_DRC1_NL = -96          TX DRC1 input 'noise' level [dB] [dB] */
  0x0100,  /*           TX_DRC1_NG = 0            TX DRC1 noise gain [dB] [dB] */
  0x0100,  /*          TX_DRC2_SAT = 0            TX DRC2 saturation (limiting) level (SAT < 0 dB) or const gain (SAT > 0 dB) [dB] [dB] */
  0x01ff,  /*           TX_AGC_MXG = 6            TX AGC max gain [dB] [dB] */
  0x0148,  /*          TX_AGC_MXGL = -40          TX AGC signal level at which max gain is applied [dB] [dB] */
  0x7fff,  /*           TX_AGC_ZGL = 0            TX AGC signal level at which zero gain is applied [dB] [dB] */
  0x00c8,  /*            TX_AGC_RT = 200          TX AGC 'release time', i.e. time that it takes to double the gain of voiced signal [ms] [int] */
  0x0000,  /*          TX_AGC_LTHR = -96          TX AGC trigger signal level threshold [dB] [dB] */
  0x2000,  /*          TX_AGC_VTHR = 0.2500       TX AGC VAD level threshold [frac] [flt] */
  0x7148,  /*            TX_AGC_FT = 29000        TX AGC 'fade time', i.e. time that it takes for the gain to fall by half [ms] [int] */
}; /**** static vcp_profile_agc_t p_tx_agc */

static vcp_profile_dcr_t p_tx_dcr = { /*** TX DC removal */
  0x0000,  /*           TX_DCR_BPS = Normal       TX DCR bypass modes */
  0x0032,  /*            TX_DCR_FC = 50           TX DC removal filter cut-off frequency [Hz] [int] */
}; /**** static vcp_profile_dcr_t p_tx_dcr */

static vcp_profile_dcr_t p_rx_dcr = { /*** RX DC removal */
  0x0000,  /*           RX_DCR_BPS = Normal       RX DCR bypass modes */
  0x0032,  /*            RX_DCR_FC = 50           RX DC removal filter cut-off freq. [Hz] [int] */
}; /**** static vcp_profile_dcr_t p_rx_dcr */

static vcp_profile_ns2_t p_rx_ns2 = { /*** RX NS2 */
  0x0000,  /*           RX_NS2_BPS = Normal       RX NS bypass options */
  0x0000,  /*           RX_NS2_FPF = 0            First (bottom) processed frequency [Hz] [int] */
  0x1f40,  /*           RX_NS2_LPF = 8000         Last (top) processed frequency [Hz] [int] */
  0x0dac,  /*           RX_NS2_HRF = 3500         High resolution upper frequency [Hz] [int] */
  0xfff7,  /*           RX_NS2_SNS = -9           Stationary noise suppression gain [dB] [int] */
  0xffa0,  /*          RX_NS2_MING = -96          Minimal allowed total noise suppression gain [dB] [int] */
  0xfffd,  /*         RX_NS2_WBNGG = -3           Wideband noise gate gain [dB] [int] */
  0x0000,  /*            RX_NS2_TC = 0            Tone control threshold (> 0 - suppression, < 0 - attenuation), [dB] [int] */
  0xfff7,  /*          RX_NS2_GDNR = -9           Minimal allowed AGC-depended NR gain auto-correction [dB] [int] */
  0xfff4,  /*      RX_NS2_BNL_MING = -12          Minimal allowed NR gain correction by BNL [dB] [int] */
  0x0006,  /*        RX_NS2_BNL_EF = 6            BNL spectrum curvature factor (lower -> more flat) [dB] [int] */
  0x0000,  /*       RX_NS2_BNL_HIT = 0            BNL high threshold (subband NR gain increases above it) [dB] [int] */
  0x5fff,  /*       RX_NS2_BNL_HIS = 0.7500       BNL high threshold slope [frac] [flt] */
  0xffa0,  /*       RX_NS2_BNL_LOT = -96          BNL low threshold (subband NR gain is 0 dB below it) [dB] [int] */
  0x3fff,  /*       RX_NS2_BNL_LOS = 0.5000       BNL low threshold slope [frac] [flt] */
  0x02bc,  /*          RX_NS2_SNAT = 700          Stationary noise adaptation time [ms] [int] */
  0x0064,  /*          RX_NS2_TNAT = 100          Transient noise adaptation time [ms] [int] */
  0x0bb8,  /*          RX_NS2_SPAT = 3000         Speech noise adaptation time [ms] [int] */
  0x0000,  /*          RX_NS2_NTF1 = 0.0          Sensitivity to signal at low frequencies [frac] [flt] */
  0x0000,  /*          RX_NS2_NTF2 = 0.0          Sensitivity to signal at high frequencies [frac] [flt] */
  0xfffa,  /*          RX_NS2_LFNF = -6           Low frequency noise flattering minimal gain [dB] [int] */
  0x3fff,  /*           RX_NS2_NSS = 0.5000       NS smoothness [frac] [flt] */
  0x0000,  /*           RX_NS2_LAT = 0            NS look ahead time, frames [int] [int] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) , /*    RX_NS2_WNR_FLAG = Off          Single-channel Wind Noise Reduction (WNR) [flag] */
  0x3fff,  /*       RX_NS2_WNR_STR = 0.5000       Wind noise reduction strength [frac] [flt] */
  0xfff1,  /*      RX_NS2_WNR_MATT = -15          Wind noise reduction minimal attenuation [dB] [int] */
  0x0000,  /*       RX_NS2_WNR_THR = 0            Wind noise reduction threshold [dB] [int] */
  0x01f4,  /*        RX_NS2_WNR_IT = 500          Wind confirmation increase time, ms [int] [int] */
  0x1770,  /*        RX_NS2_WNR_DT = 6000         Wind confirmation decrease time, ms [int] [int] */
  0x0000,  /*      RX_NS2_CNG_MODE = 0            Comfort noise generation work mode 0,1,2 [int] [int] */
  0x7332,  /*      RX_NS2_CNG_CUTG = 0.9000       Comfort noise generation gain cut level [frac] [flt] */
}; /**** static vcp_profile_ns2_t p_rx_ns2 */

static vcp_profile_eq_t p_rx_ns2_snsg_eq = { /*** RX SNS EQ */
  0x0000,   /* Num entries = 0 */
  0x0000,   /*     EQ type = 0 */
  {
   0x0000, 0x0000    /*     0.00 Hz -> -72.0 dB */
  }
}; /**** static vcp_profile_eq_t p_rx_ns2_snsg_eq */

static vcp_profile_eq_t p_rx_ns2_bnlh_eq = { /*** RX BNLH EQ */
  0x0000,   /* Num entries = 0 */
  0x0000,   /*     EQ type = 0 */
  {
   0x0000, 0x0000    /*     0.00 Hz -> -72.0 dB */
  }
}; /**** static vcp_profile_eq_t p_rx_ns2_bnlh_eq */

static vcp_profile_eq_t p_rx_ns2_ming_eq = { /*** RX MING EQ */
  0x0000,   /* Num entries = 0 */
  0x0000,   /*     EQ type = 0 */
  {
   0x0000, 0x0000    /*     0.00 Hz -> -72.0 dB */
  }
}; /**** static vcp_profile_eq_t p_rx_ns2_ming_eq */

static vcp_profile_af_t p_tx_af = { /*** TX AF */
  0x0000,  /*            TX_AF_BPS = Normal       TX AF bypass options */
  0x1f40,  /*            TX_AF_UDF = 8000         Upper duplex (filtering) frequency [Hz] [int] */
  0x0bb8,  /*           TX_AF_AFUF = 3000         1st adaptive filter upper frequency [Hz] [int] */
  0x0021,  /*         TX_AF_AFATHR = -60          Minimal signal level for AF adaptation [dB] [dB] */
  0x0021,  /*         TX_AF_AFFTHR = -60          Minimal signal level for AF filtering [dB] [dB] */
  0x0000,  /*            TX_AF_BFF = 0            Bottom filter frequency [Hz] [int] */
             /* FLAGS: value == 0x0001 */
  (1 << 0) , /*        TX_AF_AFCCA = On           Adaptive filter correlation-controlled adaptation [flag] */
  0x7fff,  /*          TX_AF_FLCFV = 1.00         Correlation function value limit [frac] [flt] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) , /*         TX_AF_AFST = Off          Stereo AF mode (stereo AEC) [flag] */
  0x0000,  /*           TX_AF_AFAM = normal       Adaptive filter adaptation mode */
  0x6666,  /*            TX_AF_ARF = 0.8000       Adaptation rate factor [frac] [flt] */
             /* FLAGS: value == 0x0001 */
  (1 << 0) , /*         TX_AF_AFAH = On           Reference activity hold [flag] */
  0x0064,  /*           TX_AF_AFL1 = 100          Effective length of 1st adaptive filter [ms] [int] */
             /* FLAGS: value == 0x0001 */
  (1 << 0) , /*         TX_AF_TSF1 = On           Two stage adaptive filtering of AFL1 [flag] */
  0x0064,  /*           TX_AF_AFL2 = 100          Effective length of 2nd adaptive filter (above AFUF) [ms] [int] */
             /* FLAGS: value == 0x0001 */
  (1 << 0) , /*         TX_AF_TSF2 = On           Two stage adaptive filtering of AFL2 [flag] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) , /*         TX_AF_FOST = Off          Filter output sample type, off=min, on=last [flag] */
}; /**** static vcp_profile_af_t p_tx_af */

static vcp_profile_es_t p_tx_es = { /*** TX ES */
  0x0000,  /*            TX_ES_BPS = Normal       TX ES bypass options */
  0x02ee,  /*         TX_ES_HDTIME = 750          Half-duplex ref. activity time after VCP init [ms] [int] */
  0x0021,  /*          TX_ES_ESTHR = -60          Minimal reference signal level that triggers ES [dB] [dB] */
  0x0021,  /*         TX_ES_REFTHR = -60          Reference signal activity level threshold [dB] [dB] */
  0x00a4,  /*         TX_ES_UDFTHR = -46          Reference signal activity level threshold for bands above UDF [dB] [dB] */
  0x02d1,  /*           TX_ES_UTFF = 9            UDF Transfer Function Factor [dB] [dB] */
             /* FLAGS: value == 0x0001 */
  (1 << 0) , /*      TX_ES_CN_FLAG = On           Comfort noise substitution [flag] */
  0x0800,  /*            TX_ES_CNG = 0            Comfort noise gain [dB] [dB] */
  0x32f5,  /*            TX_ES_BCT = -8           ES band cancellation threshold [dB] [dB] */
  0x0000,  /*         TX_ES_BCT_LT = 0            ES band cancellation look-ahead time [ms] [int] */
  0x2d6a,  /*          TX_ES_GICTV = -9           Global initial convergence target value [dB] [dB] */
  0x2d6a,  /*          TX_ES_LICTV = -9           Local initial convergence target value [dB] [dB] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) , /*    TX_ES_BCTEQflag = Off          Individual BCT settings for different subbands [flag] */
  0x101d,  /*            TX_ES_GCT = -18          ES global cancellation threshold [dB] [dB] */
  0x000a,  /*            TX_ES_OBT = 10           Minimal allowed percent of open sub-bands in ES [%] [int] */
  0x0000,  /*         TX_ES_ESOTHR = -96          Minimal ES output signal level allowed during RX activity [dB] [dB] */
  0x7fff,  /*            TX_ES_PSL = 0            TX input saturation level (to close ES bands during Far End activity) [dB] [dB] */
  0x0000,  /*            TX_ES_RRT = 0            Room reverberation time (use only if adaptive filter is not long enough!) [ms] [int] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) , /*     TX_ES_NLD_FLAG = Off          Non-linear Distortions (NLD) [flag] */
  0x0000,  /*            TX_ES_NDC = 0.0          Non-linear distortions factor [frac] [flt] */
  0x3fff,  /*           TX_ES_NDCS = 0.5000       NDC decrease step in case of reference signal level decrease [frac] [flt] */
  0x0008,  /*           TX_ES_NDCR = 8            NDC release factor [ms] [int] */
  0x0000,  /*          TX_ES_RSNDC = 0.0          Special NDC value for over-saturated Reference [frac] [flt] */
  0x7fff,  /*            TX_ES_RSL = 0            Reference signal saturation level [dB] [dB] */
  0x0bb8,  /*           TX_ES_NDF1 = 3000         Bottom frequency producing non-linear distortions [Hz] [int] */
  0x0fa0,  /*           TX_ES_NDF2 = 4000         Top frequency producing non-linear distortions [Hz] [int] */
  0x0bb8,  /*          TX_ES_NDGF1 = 3000         Bottom frequency generating non-linear distortions [Hz] [int] */
  0x0fa0,  /*          TX_ES_NDGF2 = 4000         Top frequency generating non-linear distortions [Hz] [int] */
  0x0000,  /*      TX_ES_INAMP_SEL = AF_out       Selection of mic to be used for echo attenuation calculation */
  0x0000,  /*         TX_ES_AF_SEL = AF_at_ADM_front     Selection of output signal for echo attenuation estimation */
             /* FLAGS: value == 0x0001 */
  (1 << 0) , /*    TX_ES_AGC_RAGIB = On           Ref. activity AGC gain increase ban (1=gain increase forbidden) [flag] */
}; /**** static vcp_profile_es_t p_tx_es */

static vcp_profile_eq_t p_rx_eq = { /*** RX EQ */
  0x0004,   /* Num entries = 4 */
  0x0000,   /*     EQ type = 0 */
  {
   0x00fa, 0x0800,   /*    62.50 Hz -> +0.0  dB */
   0x7bc7, 0x016c    /*  7921.75 Hz -> -15.0 dB */
  }
}; /**** static vcp_profile_eq_t p_rx_eq */

static vcp_profile_agc_t p_rx_agc = { /*** RX AGC/DRC */
  0x0000,  /*           RX_DRC_BPS = Normal       Bypass modes */
  0x0080,  /*          RX_DRC1_SAT = -6           RX DRC1 saturation (limiting) level (SAT < 0 dB) or const gain (SAT > 0 dB) [dB] [dB] */
  0x0000,  /*           RX_DRC1_SL = -96          RX DRC1 input 'signal' level [dB] [dB] */
  0x0000,  /*           RX_DRC1_NL = -96          RX DRC1 input 'noise' level [dB] [dB] */
  0x0100,  /*           RX_DRC1_NG = 0            RX DRC1 noise gain [dB] [dB] */
  0x0100,  /*          RX_DRC2_SAT = 0            RX DRC2 saturation (limiting) level (SAT < 0 dB) or const gain (SAT > 0 dB) [dB] [dB] */
  0x01ff,  /*           RX_AGC_MXG = 6            RX AGC max gain [dB] [dB] */
  0x0148,  /*          RX_AGC_MXGL = -40          RX AGC signal level at which max gain is applied [dB] [dB] */
  0x7fff,  /*           RX_AGC_ZGL = 0            RX AGC signal level at which zero gain is applied [dB] [dB] */
  0x00c8,  /*            RX_AGC_RT = 200          RX AGC 'release time', i.e. time that it takes to double the gain of voiced signal [ms] [int] */
  0x0000,  /*          RX_AGC_LTHR = -96          RX AGC trigger signal level threshold [dB] [dB] */
  0x2000,  /*          RX_AGC_VTHR = 0.2500       RX AGC VAD level threshold [frac] [flt] */
  0x7148,  /*            RX_AGC_FT = 29000        RX AGC 'fade time', i.e. time that it takes for the gain to fall by half [ms] [int] */
}; /**** static vcp_profile_agc_t p_rx_agc */

static vcp_profile_dtgc_t p_rx_dtgc = { /*** RX DTGC */
  0x0000,  /*          RX_DTGC_BPS = Normal       DTGC bypass modes */
  0x5a9d,  /*          RX_DTGC_ATT = -3           RX DTGC attenuation gain in Double Talk [dB] [dB] */
  0x4026,  /*          RX_DTGC_LIM = -6           RX DTGC DRC1_SAT modifier [dB] [dB] */
  0x001e,  /*           RX_DTGC_DT = 30           RX DTGC gain decrease time [ms] [int] */
  0x00fa,  /*           RX_DTGC_IT = 250          RX DTGC gain increase time [ms] [int] */
  0x00c8,  /*           RX_DTGC_HT = 200          RX DTGC attenuated gain hold time [ms] [int] */
  0x7fff,  /*           RX_DTGC_HP = 0            RX DTGC high-pass filter gain at 1000 Hz in Double Talk [dB] [dB] */
  0x0003,  /*          RX_DTGC_THR = -81          RX DTGC actuation threshold [dB] [dB] */
  0x2000,  /*         RX_DTGC_VTHR = 0.2500       RX DTGC VAD threshold upon TX NS vad value [frac] [flt] */
}; /**** static vcp_profile_dtgc_t p_rx_dtgc */

static vcp_profile_debug_t p_deb = { /*** Debugs */
  0x0000,  /*        DEB_TXIN_MODE = normal       TXin debug modes */
  0x0032,  /*        DEB_TXIN_FREQ = 50           TXin tone freq [Hz] [int] */
  0x4026,  /*        DEB_TXIN_AMPL = -6           TXin ampl FS [dB] [dB] */
  0x7fff,  /*       DEB_TXIN_DECAY = 0            TXin decay per cycle [dB] [dB] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) | /*     DEB_TXIN_PAUSE = 0            TXin signal pause in frames [int] */
  (0 << 8) , /*       DEB_TXIN_LEN = 0            TXin signal length in frames [int] */
  0x0000,  /*       DEB_TXOUT_MODE = normal       TXout debug modes */
  0x0032,  /*       DEB_TXOUT_FREQ = 50           TXout debug tone freq [Hz] [int] */
  0x4026,  /*       DEB_TXOUT_AMPL = -6           TXout ampl FS [dB] [dB] */
  0x7fff,  /*      DEB_TXOUT_DECAY = 0            TXout decay per cycle [dB] [dB] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) | /*    DEB_TXOUT_PAUSE = 0            TXout signal pause in frames [int] */
  (0 << 8) , /*      DEB_TXOUT_LEN = 0            TXout signal length  in frames [int] */
  0x0000,  /*        DEB_RXIN_MODE = normal       RXin debug modes */
  0x0032,  /*        DEB_RXIN_FREQ = 50           RXin debug tone freq [Hz] [int] */
  0x4026,  /*        DEB_RXIN_AMPL = -6           RXin ampl FS [dB] [dB] */
  0x7fff,  /*       DEB_RXIN_DECAY = 0            RXin decay per cycle [dB] [dB] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) | /*     DEB_RXIN_PAUSE = 0            RXin signal pause in frames [int] */
  (0 << 8) , /*       DEB_RXIN_LEN = 0            RXin signal length in frames [int] */
  0x0000,  /*       DEB_RXOUT_MODE = normal       RXout debug modes */
  0x0032,  /*       DEB_RXOUT_FREQ = 50           RXout debug tone freq [Hz] [int] */
  0x4026,  /*       DEB_RXOUT_AMPL = -6           RXout ampl FS [dB] [dB] */
  0x7fff,  /*      DEB_RXOUT_DECAY = 0            RXout decay per cycle [dB] [dB] */
             /* FLAGS: value == 0x0000 */
  (0 << 0) | /*    DEB_RXOUT_PAUSE = 0            RXout signal pause in frames [int] */
  (0 << 8) , /*      DEB_RXOUT_LEN = 0            RXout signal length  in frames [int] */
  0x7fff,  /*          DEB_TX_ISOT = 0            TX input overload threshold [dB] [dB] */
  0x01f4,  /*           DEB_TX_OSL = 500          On TX input overload emergency signal length [ms] [int] */
  0x7fff,  /*           DEB_TX_OSA = 0            On TX input overload emergency signal amplitude [dB] [dB] */
  0x02ee,  /*           DEB_TX_OSF = 750          On TX input overload emergency signal frequency [Hz] [int] */
  0x7fff,  /*          DEB_RX_ISOT = 0            RX input overload threshold [dB] [dB] */
  0x01f4,  /*           DEB_RX_OSL = 500          On RX input overload emergency signal length [ms] [int] */
  0x7fff,  /*           DEB_RX_OSA = 0            On RX input overload emergency signal amplitude [dB] [dB] */
  0x05dc,  /*           DEB_RX_OSF = 1500         On RX input overload emergency signal frequency [Hz] [int] */
}; /**** static vcp_profile_debug_t p_deb */

PROFILE_TYPE(t) profile = { 
  &p_gen,              /* General profile is always included             */
  &p_tx_ns2,           /* TX NS2                                         */
  &p_tx_ns2_snsg_eq,   /* TX SNS EQ                                      */
  &p_tx_ns2_bnlh_eq,   /* TX BNLH EQ                                     */
  &p_tx_ns2_ming_eq,   /* TX MING EQ                                     */
  0,                   /* Block [TX FS] -- IS TURNED OFF!                */
  &p_tx_eq,            /* TX EQ                                          */
  &p_tx_agc,           /* TX AGC/DRC                                     */
  &p_tx_dcr,           /* TX DC removal                                  */
  &p_rx_dcr,           /* RX DC removal                                  */
  &p_rx_ns2,           /* RX NS2                                         */
  &p_rx_ns2_snsg_eq,   /* RX SNS EQ                                      */
  &p_rx_ns2_bnlh_eq,   /* RX BNLH EQ                                     */
  &p_rx_ns2_ming_eq,   /* RX MING EQ                                     */
  0,                   /* Block [RX FS] -- IS TURNED OFF!                */
  &p_tx_af,            /* TX AF                                          */
  &p_tx_es,            /* TX ES                                          */
  0,                   /* Block [BCT EQ] -- IS TURNED OFF!               */
  0,                   /* Block [GCT EQ] -- IS TURNED OFF!               */
  &p_rx_eq,            /* RX EQ                                          */
  &p_rx_agc,           /* RX AGC/DRC                                     */
  &p_rx_dtgc,          /* RX DTGC                                        */
  0,                   /* Block [TX MIXER] -- IS TURNED OFF!             */
  0,                   /* Block [AUX DATA] -- IS TURNED OFF!             */
  0,                   /* Block [ADM] -- IS TURNED OFF!                  */
  &p_deb,              /* Debugs                                         */
  0                    /* Block [Logger] -- IS TURNED OFF!               */
}; /* PROFILE_TYPE(t) profile */

/*
###########################################
### CMDLINE0052v8R
###########################################

#
# General profile [PROFILE_TYPE(general_t)]
#
VER=52 FSF=16000 VCP_LIGHT=Off FRLEN=128 LPF=8000 TX_IG=0 RX_IG=0 
  TX_OG=0 RX_OG=0 STG=-96 RPD=0.0 TX_REFG_NOM=0 TX_REFG_MAX=40 TX_VVOL_NOM=0 
  TX_VVOL=0 TX_GMNR=0 RX_GMNR=0 
# Informative -- DATE=2019/03/06 
# Informative -- TIME=15:09 
# Informative -- CRC=0x83e8 

#
# Block TX_NS2_BLOCK [vcp_profile_ns2_t] is enabled
#
TX_NS2_BLOCK=On
  TX_NS2_BPS=Normal TX_NS2_FPF=0 TX_NS2_HRF=3500 TX_NS2_LAT=0 TX_NS2_LPF=8000 
  TX_NS2_SNS=-9 TX_NS2_WBNGG=-3 TX_NS2_LFNF=-6 TX_NS2_MING=-96 TX_NS2_GDNR=-9 
  TX_NS2_BNL_HIT=0 TX_NS2_BNL_HIS=0.7500 TX_NS2_BNL_LOT=-96 TX_NS2_BNL_LOS=0.5000 
  TX_NS2_BNL_MING=-12 TX_NS2_BNL_EF=6 TX_NS2_SNAT=700 TX_NS2_TNAT=100 
  TX_NS2_SPAT=3000 TX_NS2_NTF1=0.0 TX_NS2_NTF2=0.0 TX_NS2_NSS=0.5000 TX_NS2_WNR_FLAG=Off 
  TX_NS2_WNR_STR=0.5000 TX_NS2_WNR_MATT=-15 TX_NS2_WNR_THR=0 TX_NS2_WNR_IT=500 
  TX_NS2_WNR_DT=6000 TX_NS2_CNG_CUTG=0.9000 TX_NS2_CNG_MODE=0 TX_NS2_TC=0 
  

#
# Block TX_SNS_EQ [vcp_profile_eq_t] is enabled
#
TX_SNS_EQ=On
  TX_NS2_SNS_EQ={ # Values are F1=k1; F2=k1; ... Range -inf .. +24dB. Total 0 points defined.
           
         }


#
# Block TX_BNLH_EQ [vcp_profile_eq_t] is enabled
#
TX_BNLH_EQ=On
  TX_NS2_BNLH_EQ={ # Values are F1=k1; F2=k1; ... Range -inf .. +24dB. Total 0 points defined.
           
         }


#
# Block TX_MING_EQ [vcp_profile_eq_t] is enabled
#
TX_MING_EQ=On
  TX_NS2_MING_EQ={ # Values are F1=k1; F2=k1; ... Range -inf .. +24dB. Total 0 points defined.
           
         }


#
# Block TX_EQ1_BLOCK [vcp_profile_eq_t] is enabled
#
TX_EQ1_BLOCK=On
  TX_EQ1={ # Values are F1=k1; F2=k1; ... Range -inf .. +24dB. Total 2 points defined.
           62.50=-6.5; 7937.50=0.0; 
         }


#
# Block TX_OUT_AGC_BLOCK [vcp_profile_agc_t] is enabled
#
TX_OUT_AGC_BLOCK=On
  TX_DRC_BPS=Normal TX_DRC1_SAT=-6 TX_DRC1_SL=-96 TX_DRC1_NL=-96 TX_DRC1_NG=0 
  TX_AGC_MXG=6 TX_AGC_MXGL=-40 TX_AGC_ZGL=0 TX_AGC_LTHR=-96 TX_AGC_VTHR=0.2500 
  TX_AGC_RT=200 TX_AGC_FT=29000 TX_DRC2_SAT=0 

#
# Block TX_DCR_BLOCK [vcp_profile_dcr_t] is enabled
#
TX_DCR_BLOCK=On
  TX_DCR_BPS=Normal TX_DCR_FC=50 

#
# Block RX_DCR_BLOCK [vcp_profile_dcr_t] is enabled
#
RX_DCR_BLOCK=On
  RX_DCR_BPS=Normal RX_DCR_FC=50 

#
# Block RX_NS2_BLOCK [vcp_profile_ns2_t] is enabled
#
RX_NS2_BLOCK=On
  RX_NS2_BPS=Normal RX_NS2_FPF=0 RX_NS2_HRF=3500 RX_NS2_LAT=0 RX_NS2_LPF=8000 
  RX_NS2_SNS=-9 RX_NS2_WBNGG=-3 RX_NS2_LFNF=-6 RX_NS2_MING=-96 RX_NS2_GDNR=-9 
  RX_NS2_BNL_HIT=0 RX_NS2_BNL_HIS=0.7500 RX_NS2_BNL_LOT=-96 RX_NS2_BNL_LOS=0.5000 
  RX_NS2_BNL_MING=-12 RX_NS2_BNL_EF=6 RX_NS2_SNAT=700 RX_NS2_TNAT=100 
  RX_NS2_SPAT=3000 RX_NS2_NTF1=0.0 RX_NS2_NTF2=0.0 RX_NS2_NSS=0.5000 RX_NS2_WNR_FLAG=Off 
  RX_NS2_WNR_STR=0.5000 RX_NS2_WNR_MATT=-15 RX_NS2_WNR_THR=0 RX_NS2_WNR_IT=500 
  RX_NS2_WNR_DT=6000 RX_NS2_CNG_CUTG=0.9000 RX_NS2_CNG_MODE=0 RX_NS2_TC=0 
  

#
# Block RX_SNS_EQ [vcp_profile_eq_t] is enabled
#
RX_SNS_EQ=On
  RX_NS2_SNS_EQ={ # Values are F1=k1; F2=k1; ... Range -inf .. +24dB. Total 0 points defined.
           
         }


#
# Block RX_BNLH_EQ [vcp_profile_eq_t] is enabled
#
RX_BNLH_EQ=On
  RX_NS2_BNLH_EQ={ # Values are F1=k1; F2=k1; ... Range -inf .. +24dB. Total 0 points defined.
           
         }


#
# Block RX_MING_EQ [vcp_profile_eq_t] is enabled
#
RX_MING_EQ=On
  RX_NS2_MING_EQ={ # Values are F1=k1; F2=k1; ... Range -inf .. +24dB. Total 0 points defined.
           
         }


#
# Block TX_AF_BLOCK [vcp_profile_af_t] is enabled
#
TX_AF_BLOCK=On
  TX_AF_BPS=Normal TX_AF_BFF=0 TX_AF_UDF=8000 TX_AF_AFUF=3000 TX_AF_AFATHR=-60 
  TX_AF_AFFTHR=-60 TX_AF_AFST=Off TX_AF_AFAM=normal TX_AF_ARF=0.8000 TX_AF_AFAH=On 
  TX_AF_AFCCA=On TX_AF_FLCFV=1.0000 TX_AF_AFL1=100 TX_AF_TSF1=On TX_AF_AFL2=100 
  TX_AF_TSF2=On TX_AF_FOST=Off 

#
# Block TX_ES_BLOCK [vcp_profile_es_t] is enabled
#
TX_ES_BLOCK=On
  TX_ES_BPS=Normal TX_ES_ESTHR=-60 TX_ES_REFTHR=-60 TX_ES_UDFTHR=-46 TX_ES_UTFF=9 
  TX_ES_AF_SEL=AF_at_ADM_front TX_ES_INAMP_SEL=AF_out TX_ES_HDTIME=750 TX_ES_GICTV=-9 TX_ES_LICTV=-9 
  TX_ES_CN_FLAG=On TX_ES_CNG=0 TX_ES_BCT=-8 TX_ES_BCT_LT=0 TX_ES_BCTEQflag=Off 
  TX_ES_GCT=-18 TX_ES_OBT=10 TX_ES_ESOTHR=-96 TX_ES_NLD_FLAG=Off TX_ES_NDC=0.0 
  TX_ES_NDCS=0.5000 TX_ES_NDCR=8 TX_ES_RSNDC=0.0 TX_ES_RSL=0 TX_ES_NDF1=3000 
  TX_ES_NDF2=4000 TX_ES_NDGF1=3000 TX_ES_NDGF2=4000 TX_ES_PSL=0 TX_ES_RRT=0 
  TX_ES_AGC_RAGIB=On 

#
# Block RX_EQ1_BLOCK [vcp_profile_eq_t] is enabled
#
RX_EQ1_BLOCK=On
  RX_EQ1={ # Values are F1=k1; F2=k1; ... Range -inf .. +24dB. Total 2 points defined.
           62.50=0.0; 7921.75=-15.0; 
         }


#
# Block RX_OUT_AGC_BLOCK [vcp_profile_agc_t] is enabled
#
RX_OUT_AGC_BLOCK=On
  RX_DRC_BPS=Normal RX_DRC1_SAT=-6 RX_DRC1_SL=-96 RX_DRC1_NL=-96 RX_DRC1_NG=0 
  RX_AGC_MXG=6 RX_AGC_MXGL=-40 RX_AGC_ZGL=0 RX_AGC_LTHR=-96 RX_AGC_VTHR=0.2500 
  RX_AGC_RT=200 RX_AGC_FT=29000 RX_DRC2_SAT=0 

#
# Block RX_DTGC_BLOCK [vcp_profile_dtgc_t] is enabled
#
RX_DTGC_BLOCK=On
  RX_DTGC_BPS=Normal RX_DTGC_ATT=-3 RX_DTGC_LIM=-6 RX_DTGC_DT=30 RX_DTGC_IT=250 
  RX_DTGC_HT=200 RX_DTGC_HP=0 RX_DTGC_THR=-81 RX_DTGC_VTHR=0.2500 

#
# Block DEBUG_BLOCK [vcp_profile_debug_t] is enabled
#
DEBUG_BLOCK=On
  DEB_TXIN_MODE=normal DEB_TXIN_FREQ=50 DEB_TXIN_AMPL=-6 DEB_TXIN_DECAY=0 
  DEB_TXIN_LEN=0 DEB_TXIN_PAUSE=0 DEB_TXOUT_MODE=normal DEB_TXOUT_FREQ=50 DEB_TXOUT_AMPL=-6 
  DEB_TXOUT_DECAY=0 DEB_TXOUT_LEN=0 DEB_TXOUT_PAUSE=0 DEB_RXIN_MODE=normal DEB_RXIN_FREQ=50 
  DEB_RXIN_AMPL=-6 DEB_RXIN_DECAY=0 DEB_RXIN_LEN=0 DEB_RXIN_PAUSE=0 DEB_RXOUT_MODE=normal DEB_RXOUT_FREQ=50 
  DEB_RXOUT_AMPL=-6 DEB_RXOUT_DECAY=0 DEB_RXOUT_LEN=0 DEB_RXOUT_PAUSE=0 
  DEB_TX_ISOT=0 DEB_TX_OSL=500 DEB_TX_OSA=0 DEB_TX_OSF=750 DEB_RX_ISOT=0 
  DEB_RX_OSL=500 DEB_RX_OSA=0 DEB_RX_OSF=1500 



*/
