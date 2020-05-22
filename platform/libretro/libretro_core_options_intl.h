#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

struct retro_core_option_definition option_defs_chs[] = {
   {
      "picodrive_input1",
      "输入设备1",
      "选择1号控制器的类型。",
      {
         { "3 button pad", "3键手柄" },
         { "6 button pad", "6键手柄" },
         { "None", "无" },
         { NULL, NULL },
      },
      "3 button pad"
   },
   {
      "picodrive_input2",
      "输入设备2",
      "选择2号控制器的类型。",
      {
         { "3 button pad", "3键手柄" },
         { "6 button pad", "6键手柄" },
         { "None", "无" },
         { NULL, NULL },
      },
      "3 button pad"
   },
   {
      "picodrive_sprlim",
      "无角色限制",
      "启用此项移除角色限制。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "picodrive_ramcart",
      "MegaCD RAM卡",
      "模拟MegaCD RAM卡，用于保存游戏存档。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "picodrive_region",
      "区域",
      "强制指定区域。",
      {
         { "Auto",       "自动" },
         { "Japan NTSC", "日本NTSC" },
         { "Japan PAL",  "日本PAL" },
         { "US",         "美国" },
         { "Europe",     "欧洲" },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "picodrive_aspect",
      "显示宽高比",
      "选择期望的显示宽高比。\n"
      "此项设置只有当RetroArch的宽高比设为‘内核提供’时有效。",
      {
         { "PAR", "像素宽高比" },
         { "4/3", NULL },
         { "CRT", NULL },
         { NULL, NULL },
      },
      "PAR"
   },
   {
      "picodrive_overscan",
      "是否显示过扫描",
      "剪切掉过扫描区域，可能包含无效图像，这些区域通常被标准电视的边框隐藏了。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "picodrive_overclk68k",
      "68K超频",
      "对模拟的68K芯片进行超频。",
      {
         { "disabled", "禁用" },
         { "+25%",     NULL },
         { "+50%",     NULL },
         { "+75%",     NULL },
         { "+100%",    NULL },
         { "+200%",    NULL },
         { "+400%",    NULL },
         { NULL, NULL },
      },
      "disabled"
   },
#ifdef DRC_SH2
   {
      "picodrive_drc",
      "动态重编译",
      "启用动态重编译可提高性能。\n"
      "比解释型CPU内核精确度低，但是速度更快。",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL },
      },
      "enabled"
   },
#endif
   {
      "picodrive_audio_filter",
      "音频过滤",
      "启用音频低通滤镜，以更好地模拟MD1型机的声音特性。\n"
      "此项设置在运行Master System和PICO游戏时忽略。\n"
      "只有MD/Genesis和相关附加硬件（Sega CD, 32X）有物理低通滤镜。",
      {
         { "disabled", "禁用" },
         { "low-pass", "启用" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "picodrive_lowpass_range",
      "低通滤镜强度%",
      "设置低通滤镜的截断频率。\n"
      "值越高，可察觉到的过滤强度越高，因为更宽范围的高频扩展被减弱了。",
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
#if !defined(RENDER_GSKIT_PS2)
   {
      "picodrive_renderer",
      "渲染方式",
      "快速渲染无法渲染任何帧内图像变化，因此只对部分游戏有用。",
      {
         { "accurate", "精确" },
         { "fast",  "快速" },
         { NULL, NULL },
      },
      "accurate"
   },
#endif
   {
      "picodrive_sound_rate",
      "声音质量",
      "设置声音输出采样率（Hz）。低采样率可提高性能。",
      {
         { "16000", NULL },
         { "22050", NULL },
         { "32000", NULL },
         { "44100", NULL },
         { NULL, NULL },
      },
      "44100"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_definition option_defs_tr[] = {
   {
      "picodrive_input1",
      "Giriş cihazı 1",
      "Hangi tür kontrolör'ün yuva 1'e takılı olduğunu seçin.",
      {
         { "3 button pad", NULL },
         { "6 button pad", NULL },
         { "None",         "hiçbiri" },
         { NULL, NULL },
      },
      "3 button pad"
   },
   {
      "picodrive_input2",
      "Giriş cihazı 2",
      "Hangi tür kontrolör'ün yuva 2'e takılı olduğunu seçin",
      {
         { "3 button pad", NULL },
         { "6 button pad", NULL },
         { "None",         "hiçbiri" },
         { NULL, NULL },
      },
      "3 button pad"
   },
   {
      "picodrive_sprlim",
      "Sprite sınırı yok",
      "Sprite sınırını kaldırmak için bunu etkinleştirin.",
      {
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "picodrive_ramcart",
      "Sega CD RAM Kartuşu",
      "Oyun verilerini kaydetmek için kullanılan bir MegaCD RAM kartuşunu taklit edin.",
      {
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "picodrive_region",
      "Bölge",
      "Belirli bir bölgeye zorlayın.",
      {
         { "Auto",       "Otomatik" },
         { "Japan NTSC", "Japonya NTSC" },
         { "Japan PAL",  "Japonya PAL" },
         { "US",         NULL },
         { "Europe",     "Avrupa" },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "picodrive_aspect",
      "Core tarafından belirlenen en boy oranı",
      "Core tarafından sağlanan en boy oranını seçin. RetroArch'ın en boy oranı, Video ayarlarında sağlanan Core olarak ayarlanmalıdır.",
      {
         { NULL, NULL },
      },
      "PAR"
   },
   {
      "picodrive_overscan",
      "Tarama Taşmasını Göster",
      "Standart tanımlı bir televizyon ekranının kenar çevresinde, çerçeve tarafından gizlenmiş olabilecek rastgele video çıkışını kesin.",
      {
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "picodrive_overclk68k",
      "68K Hızaşırtma",
      "Öykünülmüş 68K yongasına Hızaşırtma uygulayın.",
      {
         { NULL, NULL },
      },
      "disabled"
   },
#ifdef DRC_SH2
   {
      "picodrive_drc",
      "Dinamik Yeniden Derleyici",
      "Performansı artırmaya yardımcı olan dinamik yeniden derleyicileri etkinleştirin. Tercüman CPU çekirdeğinden daha az hassas, ancak çok daha hızlıdır.",
      {
         { NULL, NULL },
      },
      "enabled"
   },
#endif
   {
      "picodrive_audio_filter",
      "Ses Filtresi",
      "Model 1 Genesis'in karakteristik sesini daha iyi simüle etmek için düşük geçişli bir ses filtresini etkinleştirin. Master System ve PICO başlıkları kullanılırken bu seçenek yoksayılır. Sadece Genesis ve eklenti donanımı (Sega CD, 32X) fiziksel düşük geçiş filtresi kullanır.",
      {
         { "disabled", "devre dışı" },
         { "low-pass", "alçak geçiş" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "picodrive_lowpass_range",
      "Alçak geçiş filtresi %",
      "Ses düşük geçiş filtresinin kesme frekansını belirtin. Daha yüksek bir değer, yüksek frekans spektrumunun daha geniş bir aralığı azaltıldığı için filtrenin algılanan gücünü arttırır.",
      {
         { NULL, NULL },
      },
      "60"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

#ifdef __cplusplus
}
#endif

#endif
