
#ifndef PV_2WAY_PROXY_FACTORY_H_INCLUDED
#define PV_2WAY_PROXY_FACTORY_H_INCLUDED

#ifndef PV_COMMON_TYPES_H_INCLUDED
#include "pv_common_types.h"
#endif

#ifndef PV_2WAY_INTERFACE_H_INCLUDED
#include "pv_2way_interface.h"
#endif

#ifndef PV_ENGINE_OBSERVER_H_INCLUDED
#include "pv_engine_observer.h"
#endif

class CPV2WayProxyFactory
{
    public:
        OSCL_IMPORT_REF static void Init();

        OSCL_IMPORT_REF static void Cleanup();

        /**
         * Creates an instance of a terminal of a particular type.  Initially, this
         * will support 324m type terminals.
         *
         * @param aTerminalType the type of terminal to be created.
         * @param aCmdStatusObserver     the observer for command status
         * @param aInfoEventObserver     the observer for unsolicited informational events
         * @param aErrorEventObserver     the observer for unsolicited error events
         *
         * @returns A pointer to a terminal or leaves if the type is invalid or the system is out of resources
         **/
        OSCL_IMPORT_REF static CPV2WayInterface *CreateTerminal(TPVTerminalType aTerminalType,
                PVCommandStatusObserver* aCmdStatusObserver,
                PVInformationalEventObserver *aInfoEventObserver,
                PVErrorEventObserver *aErrorEventObserver);

        /**
         * This function allows the application to delete an instance of a terminal
         * and reclaim all allocated resources.  A terminal should be deleted only in
         * the EIdle state.  An attempt to delete a terminal in any other state will
         * result in unpredictable behavior.
         *
         * @param terminal the terminal to be deleted.
         *
         **/
        OSCL_IMPORT_REF static void DeleteTerminal(CPV2WayInterface* terminal);
};

#endif // PV_2WAY_PROXY_FACTORY_H_INCLUDED
