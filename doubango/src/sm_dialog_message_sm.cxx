/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : sm_dialog_message.sm
 */


//	** Copyright (C) 2009 Doubango Telecom <imsframework(at)gmail.com> 
//
//	This file is part of 'Doubango IMS Client Framework'.
//
//    'Doubango IMS Client Framework' is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    'Doubango IMS Client Framework' is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//  along with 'Doubango IMS Client Framework'.  If not, see <http://www.gnu.org/licenses/>.
//
//	** For commercial use, you must purchase a proprietary license from Doubango Telecom.
//
//
///* Copyright (C) 2009 Doubango Telecom
//*
//* Authors:	F0076RTY <imsframework@gmail.com>
//*
//*/
//


#include "sip_dialog_message.h"
#include "..\..\doubango\src\sm_dialog_message_sm.h"

using namespace statemap;

namespace dgo
{
    // Static class declarations.
    map_dialog_message_Initialized map_dialog_message::Initialized("map_dialog_message::Initialized", 0);
    map_dialog_message_Trying map_dialog_message::Trying("map_dialog_message::Trying", 1);
    map_dialog_message_Authentifying map_dialog_message::Authentifying("map_dialog_message::Authentifying", 2);
    map_dialog_message_Terminated map_dialog_message::Terminated("map_dialog_message::Terminated", 3);

    void sip_dialog_messageState::sm_1xx_response(sip_dialog_messageContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_messageState::sm_2xx_response(sip_dialog_messageContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_messageState::sm_401_407_421_494_response(sip_dialog_messageContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_messageState::sm_messageSent(sip_dialog_messageContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_messageState::sm_unsupported_response(sip_dialog_messageContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_messageState::Default(sip_dialog_messageContext& context)
    {
        assert(1==0);

        return;
    }

    void map_dialog_message_Default::sm_401_407_421_494_response(sip_dialog_messageContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_message::Authentifying);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_message_Default::Default(sip_dialog_messageContext& context)
    {


        return;
    }

    void map_dialog_message_Initialized::Entry(sip_dialog_messageContext& context)

{
        sip_dialog_message& ctxt(context.getOwner());

        ctxt.OnStateChanged(SS_MESSAGE_INITIALIZED);
        return;
    }

    void map_dialog_message_Initialized::sm_messageSent(sip_dialog_messageContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_message::Trying);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_message_Trying::Entry(sip_dialog_messageContext& context)

{
        sip_dialog_message& ctxt(context.getOwner());

        ctxt.OnStateChanged(SS_MESSAGE_TRYING);
        return;
    }

    void map_dialog_message_Trying::sm_1xx_response(sip_dialog_messageContext& context)
    {


        return;
    }

    void map_dialog_message_Trying::sm_2xx_response(sip_dialog_messageContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_message::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_message_Trying::sm_401_407_421_494_response(sip_dialog_messageContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_message::Authentifying);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_message_Trying::sm_unsupported_response(sip_dialog_messageContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_message::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_message_Authentifying::Entry(sip_dialog_messageContext& context)

{
        sip_dialog_message& ctxt(context.getOwner());

        ctxt.OnStateChanged(SS_MESSAGE_AUTHENTIFYING);
        return;
    }

    void map_dialog_message_Terminated::Entry(sip_dialog_messageContext& context)

{
        sip_dialog_message& ctxt(context.getOwner());

        ctxt.OnStateChanged(SS_MESSAGE_TERMINATED);
        return;
    }

    void map_dialog_message_Terminated::Default(sip_dialog_messageContext& context)
    {


        return;
    }
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
