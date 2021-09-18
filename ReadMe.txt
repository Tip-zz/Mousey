Description: Become a mouse and move back and forth one step each 5 minutes. Intended to defeat login timeout.

Target: Spark Fun Pro Micro (ATMEGA32U4).

Environment: Arduino IDE v1.8.5.  Uses mouse.h.  Configure Tools >> Board as Leonardo.

When running, flashes the Pro Micro RX LED once in a while to show that program is running.  After moving
mouse the led lights for 5 seconds.  Note that Pro Micro doesn't have a dedicated built in LED,
so use RX LED instead.

Should run on any Arduino with a on-chip USB controller.

17-Sep-2021  TEP
