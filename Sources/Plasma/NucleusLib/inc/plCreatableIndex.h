/*==LICENSE==*

CyanWorlds.com Engine - MMOG client, server and tools
Copyright (C) 2011  Cyan Worlds, Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Additional permissions under GNU GPL version 3 section 7

If you modify this Program, or any covered work, by linking or
combining it with any of RAD Game Tools Bink SDK, Autodesk 3ds Max SDK,
NVIDIA PhysX SDK, Microsoft DirectX SDK, OpenSSL library, Independent
JPEG Group JPEG library, Microsoft Windows Media SDK, or Apple QuickTime SDK
(or a modified version of those libraries),
containing parts covered by the terms of the Bink SDK EULA, 3ds Max EULA,
PhysX SDK EULA, DirectX SDK EULA, OpenSSL and SSLeay licenses, IJG
JPEG Library README, Windows Media SDK EULA, or QuickTime SDK EULA, the
licensors of this Program grant you additional
permission to convey the resulting work. Corresponding Source for a
non-source form of such a combination shall include the source code for
the parts of OpenSSL and IJG JPEG Library used as well as that of the covered
work.

You can contact Cyan Worlds, Inc. by email legal@cyan.com
 or by snail mail at:
      Cyan Worlds, Inc.
      14617 N Newport Hwy
      Mead, WA   99021

*==LICENSE==*/

#ifndef plCreatableIndex_inc
#define plCreatableIndex_inc

#include "plClassIndexMacros.h"     // for CLASS_INDEX macro defn

CLASS_INDEX_LIST_START
    //---------------------------------------------------------------------         
    // hsKeyedObjects should appear in the first section of the enum list
    // And everything else in the next section
    // Otherwise you will get an Assert
    //---------------------------------------------------------------------         
    CLASS_INDEX(plSceneNode),
    CLASS_INDEX(plSceneObject), 
    CLASS_INDEX(hsKeyedObject),
    CLASS_INDEX(plBitmap),
    CLASS_INDEX(plMipmap),
    CLASS_INDEX(plCubicEnvironmap),
    CLASS_INDEX(plLayer),       
    CLASS_INDEX(hsGMaterial),       
    CLASS_INDEX(plParticleSystem),
    CLASS_INDEX(plParticleEffect),
    CLASS_INDEX(plParticleCollisionEffectBeat),
    CLASS_INDEX(plParticleFadeVolumeEffect),
    CLASS_INDEX(plBoundInterface),
    CLASS_INDEX(plRenderTarget),
    CLASS_INDEX(plCubicRenderTarget),
    CLASS_INDEX(plCubicRenderTargetModifier),
    CLASS_INDEX(plObjInterface),
    CLASS_INDEX(plAudioInterface),
    CLASS_INDEX(plAudible),
    CLASS_INDEX(plAudibleNull),
    CLASS_INDEX(plWinAudible),
    CLASS_INDEX(plCoordinateInterface),
    CLASS_INDEX(plDrawInterface),
    CLASS_INDEX(plDrawable),        
    CLASS_INDEX(plDrawableMesh),
    CLASS_INDEX(plDrawableIce),
    CLASS_INDEX(plPhysical),
    CLASS_INDEX(plPhysicalMesh),
    CLASS_INDEX(plSimulationInterface),
    CLASS_INDEX(plCameraModifier),
    CLASS_INDEX(plModifier),
    CLASS_INDEX(plSingleModifier),
    CLASS_INDEX(plSimpleModifier),
    CLASS_INDEX(pfConsole),
    CLASS_INDEX(UNUSED_plRandomTMModifier),
    CLASS_INDEX(plInterestingModifier),
    CLASS_INDEX(plDetectorModifier),
    CLASS_INDEX(plSimplePhysicalMesh),
    CLASS_INDEX(plCompoundPhysicalMesh),
    CLASS_INDEX(plMultiModifier),
    CLASS_INDEX(plSynchedObject),
    CLASS_INDEX(plSoundBuffer),
    CLASS_INDEX(UNUSED_plAliasModifier),
    CLASS_INDEX(plPickingDetector),
    CLASS_INDEX(plCollisionDetector),
    CLASS_INDEX(plLogicModifier),
    CLASS_INDEX(plConditionalObject),
    CLASS_INDEX(plANDConditionalObject),
    CLASS_INDEX(plORConditionalObject),
    CLASS_INDEX(plPickedConditionalObject),
    CLASS_INDEX(plActivatorConditionalObject),
    CLASS_INDEX(plTimerCallbackManager),
    CLASS_INDEX(plKeyPressConditionalObject),
    CLASS_INDEX(plAnimationEventConditionalObject),
    CLASS_INDEX(plControlEventConditionalObject),
    CLASS_INDEX(plObjectInBoxConditionalObject),
    CLASS_INDEX(plLocalPlayerInBoxConditionalObject),
    CLASS_INDEX(plObjectIntersectPlaneConditionalObject),
    CLASS_INDEX(plLocalPlayerIntersectPlaneConditionalObject),
    CLASS_INDEX(plPortalDrawable),
    CLASS_INDEX(plPortalPhysical),
    CLASS_INDEX(plSpawnModifier),
    CLASS_INDEX(plFacingConditionalObject),
    CLASS_INDEX(plPXPhysical),
    CLASS_INDEX(plViewFaceModifier),
    CLASS_INDEX(plLayerInterface),
    CLASS_INDEX(plLayerWrapper),
    CLASS_INDEX(plLayerAnimation),
    CLASS_INDEX(plLayerDepth),
    CLASS_INDEX(plLayerMovie),
    CLASS_INDEX(UNUSED_plLayerBink),
    CLASS_INDEX(plLayerAVI),
    CLASS_INDEX(plSound),
    CLASS_INDEX(plWin32Sound),
    CLASS_INDEX(plLayerOr),
    CLASS_INDEX(plAudioSystem),
    CLASS_INDEX(plDrawableSpans),
    CLASS_INDEX(UNUSED_plDrawablePatchSet),
    CLASS_INDEX(plInputManager),
    CLASS_INDEX(plLogicModBase),
    CLASS_INDEX(plFogEnvironment),      
    CLASS_INDEX(plNetApp),
    CLASS_INDEX(plNetClientMgr),
    CLASS_INDEX(pl2WayWinAudible),
    CLASS_INDEX(plLightInfo),
    CLASS_INDEX(plDirectionalLightInfo),
    CLASS_INDEX(plOmniLightInfo),
    CLASS_INDEX(plSpotLightInfo),
    CLASS_INDEX(plLightSpace),
    CLASS_INDEX(plNetClientApp),
    CLASS_INDEX(plNetServerApp),
    CLASS_INDEX(plClient),
    CLASS_INDEX(UNUSED_plCompoundTMModifier),
    CLASS_INDEX(plCameraBrain),
    CLASS_INDEX(plCameraBrain_Default),
    CLASS_INDEX(plCameraBrain_Drive),
    CLASS_INDEX(plCameraBrain_Fixed),
    CLASS_INDEX(plCameraBrain_FixedPan),
    CLASS_INDEX(pfGUIClickMapCtrl),
    CLASS_INDEX(plListener),
    CLASS_INDEX(plAvatarMod),
    CLASS_INDEX(plAvatarAnim),
    CLASS_INDEX(plAvatarAnimMgr),
    CLASS_INDEX(plOccluder),
    CLASS_INDEX(plMobileOccluder),
    CLASS_INDEX(plLayerShadowBase),
    CLASS_INDEX(plLimitedDirLightInfo),
    CLASS_INDEX(plAGAnim),
    CLASS_INDEX(plAGModifier),
    CLASS_INDEX(plAGMasterMod),
    CLASS_INDEX(plCameraBrain_Avatar),
    CLASS_INDEX(plCameraRegionDetector),
    CLASS_INDEX(plCameraBrain_FP),
    CLASS_INDEX(plLineFollowMod),
    CLASS_INDEX(plLightModifier),
    CLASS_INDEX(plOmniModifier),
    CLASS_INDEX(plSpotModifier),
    CLASS_INDEX(plLtdDirModifier),
    CLASS_INDEX(plSeekPointMod),
    CLASS_INDEX(plOneShotMod),
    CLASS_INDEX(plRandomCommandMod),
    CLASS_INDEX(plRandomSoundMod),
    CLASS_INDEX(plPostEffectMod),
    CLASS_INDEX(plObjectInVolumeDetector),
    CLASS_INDEX(plResponderModifier),
    CLASS_INDEX(plAxisAnimModifier),
    CLASS_INDEX(plLayerLightBase),
    CLASS_INDEX(plFollowMod),
    CLASS_INDEX(plTransitionMgr),
    CLASS_INDEX(UNUSED___plInventoryMod),
    CLASS_INDEX(UNUSED___plInventoryObjMod),
    CLASS_INDEX(plLinkEffectsMgr),
    CLASS_INDEX(plWin32StreamingSound),
    CLASS_INDEX(UNUSED___plPythonMod),
    CLASS_INDEX(plActivatorActivatorConditionalObject),
    CLASS_INDEX(plSoftVolume),
    CLASS_INDEX(plSoftVolumeSimple),
    CLASS_INDEX(plSoftVolumeComplex),
    CLASS_INDEX(plSoftVolumeUnion),
    CLASS_INDEX(plSoftVolumeIntersect),
    CLASS_INDEX(plSoftVolumeInvert),
    CLASS_INDEX(plWin32LinkSound),
    CLASS_INDEX(plLayerLinkAnimation),
    CLASS_INDEX(plArmatureMod),
    CLASS_INDEX(plCameraBrain_Freelook),
    CLASS_INDEX(plHavokConstraintsMod),
    CLASS_INDEX(plHingeConstraintMod),
    CLASS_INDEX(plWheelConstraintMod),
    CLASS_INDEX(plStrongSpringConstraintMod),
    CLASS_INDEX(plArmatureLODMod),
    CLASS_INDEX(plWin32StaticSound),
    CLASS_INDEX(pfGameGUIMgr),
    CLASS_INDEX(pfGUIDialogMod),
    CLASS_INDEX(plCameraBrain1),
    CLASS_INDEX(plVirtualCam1),
    CLASS_INDEX(plCameraModifier1),
    CLASS_INDEX(plCameraBrain1_Drive),
    CLASS_INDEX(plCameraBrain1_POA),
    CLASS_INDEX(plCameraBrain1_Avatar),
    CLASS_INDEX(plCameraBrain1_Fixed),
    CLASS_INDEX(plCameraBrain1_POAFixed),
    CLASS_INDEX(pfGUIButtonMod),
    CLASS_INDEX(plPythonFileMod),
    CLASS_INDEX(pfGUIControlMod),
    CLASS_INDEX(plExcludeRegionModifier),
    CLASS_INDEX(pfGUIDraggableMod),
    CLASS_INDEX(plVolumeSensorConditionalObject),
    CLASS_INDEX(plVolActivatorConditionalObject),
    CLASS_INDEX(plMsgForwarder),
    CLASS_INDEX(plBlower),
    CLASS_INDEX(pfGUIListBoxMod),
    CLASS_INDEX(pfGUITextBoxMod),
    CLASS_INDEX(pfGUIEditBoxMod),
    CLASS_INDEX(plDynamicTextMap),
    CLASS_INDEX(plSittingModifier),
    CLASS_INDEX(pfGUIUpDownPairMod),
    CLASS_INDEX(pfGUIValueCtrl),
    CLASS_INDEX(pfGUIKnobCtrl),
    CLASS_INDEX(plAvLadderMod),
    CLASS_INDEX(plCameraBrain1_FirstPerson),
    CLASS_INDEX(plCloneSpawnModifier),
    CLASS_INDEX(plClothingItem),
    CLASS_INDEX(plClothingOutfit),
    CLASS_INDEX(plClothingBase),
    CLASS_INDEX(plClothingMgr),
    CLASS_INDEX(pfGUIDragBarCtrl),
    CLASS_INDEX(pfGUICheckBoxCtrl),
    CLASS_INDEX(pfGUIRadioGroupCtrl),
    CLASS_INDEX(pfPlayerBookMod),
    CLASS_INDEX(pfGUIDynDisplayCtrl),
    CLASS_INDEX(UNUSED_plLayerProject),
    CLASS_INDEX(plInputInterfaceMgr),
    CLASS_INDEX(plRailCameraMod),   
    CLASS_INDEX(plMultistageBehMod),
    CLASS_INDEX(plCameraBrain1_Circle),
    CLASS_INDEX(plParticleWindEffect),
    CLASS_INDEX(plAnimEventModifier),
    CLASS_INDEX(plAutoProfile),
    CLASS_INDEX(pfGUISkin),
    CLASS_INDEX(plAVIWriter),
    CLASS_INDEX(plParticleCollisionEffect),
    CLASS_INDEX(plParticleCollisionEffectDie),
    CLASS_INDEX(plParticleCollisionEffectBounce),
    CLASS_INDEX(plInterfaceInfoModifier),
    CLASS_INDEX(plSharedMesh),
    CLASS_INDEX(plArmatureEffectsMgr),
    CLASS_INDEX(pfMarkerMgr),
    CLASS_INDEX(plVehicleModifier),
    CLASS_INDEX(plParticleLocalWind),
    CLASS_INDEX(plParticleUniformWind),
    CLASS_INDEX(plInstanceDrawInterface),
    CLASS_INDEX(plShadowMaster),
    CLASS_INDEX(plShadowCaster),
    CLASS_INDEX(plPointShadowMaster),
    CLASS_INDEX(plDirectShadowMaster),
    CLASS_INDEX(plSDLModifier),
    CLASS_INDEX(plPhysicalSDLModifier),
    CLASS_INDEX(plClothingSDLModifier),
    CLASS_INDEX(plAvatarSDLModifier),
    CLASS_INDEX(plAGMasterSDLModifier),
    CLASS_INDEX(plPythonSDLModifier),
    CLASS_INDEX(plLayerSDLModifier),
    CLASS_INDEX(plAnimTimeConvertSDLModifier),
    CLASS_INDEX(plResponderSDLModifier),
    CLASS_INDEX(plSoundSDLModifier),
    CLASS_INDEX(plResManagerHelper),
    CLASS_INDEX(plAvatarPhysicalSDLModifier),
    CLASS_INDEX(plArmatureEffect),
    CLASS_INDEX(plArmatureEffectFootSound),
    CLASS_INDEX(plEAXListenerMod),
    CLASS_INDEX(plDynaDecalMgr),
    CLASS_INDEX(plObjectInVolumeAndFacingDetector),
    CLASS_INDEX(plDynaFootMgr),
    CLASS_INDEX(plDynaRippleMgr),
    CLASS_INDEX(plDynaBulletMgr),
    CLASS_INDEX(plDecalEnableMod),
    CLASS_INDEX(plPrintShape),
    CLASS_INDEX(plDynaPuddleMgr),
    CLASS_INDEX(pfGUIMultiLineEditCtrl),
    CLASS_INDEX(plLayerAnimationBase),
    CLASS_INDEX(plLayerSDLAnimation),
    CLASS_INDEX(plATCAnim),
    CLASS_INDEX(plAgeGlobalAnim),
    CLASS_INDEX(plSubworldRegionDetector),
    CLASS_INDEX(plAvatarMgr),
    CLASS_INDEX(plNPCSpawnMod),
    CLASS_INDEX(plActivePrintShape),
    CLASS_INDEX(plExcludeRegionSDLModifier),
    CLASS_INDEX(plLOSDispatch),
    CLASS_INDEX(plDynaWakeMgr),
    CLASS_INDEX(plSimulationMgr),
    CLASS_INDEX(plWaveSet7),
    CLASS_INDEX(plPanicLinkRegion),
    CLASS_INDEX(plWin32GroupedSound),
    CLASS_INDEX(plFilterCoordInterface),
    CLASS_INDEX(plStereizer),
    CLASS_INDEX( plCCRMgr ),
    CLASS_INDEX( plCCRSpecialist ),
    CLASS_INDEX( plCCRSeniorSpecialist ),
    CLASS_INDEX( plCCRShiftSupervisor ),
    CLASS_INDEX( plCCRGameOperator ),
    CLASS_INDEX(plShader),
    CLASS_INDEX(plDynamicEnvMap),
    CLASS_INDEX(plSimpleRegionSensor),
    CLASS_INDEX(plMorphSequence),
    CLASS_INDEX(plEmoteAnim),
    CLASS_INDEX(plDynaRippleVSMgr),
    CLASS_INDEX(UNUSED_plWaveSet6),
    CLASS_INDEX(pfGUIProgressCtrl),
    CLASS_INDEX(plMaintainersMarkerModifier),
    CLASS_INDEX(plMorphSequenceSDLMod),
    CLASS_INDEX(plMorphDataSet),
    CLASS_INDEX(plHardRegion),
    CLASS_INDEX(plHardRegionPlanes),
    CLASS_INDEX(plHardRegionComplex),
    CLASS_INDEX(plHardRegionUnion),
    CLASS_INDEX(plHardRegionIntersect),
    CLASS_INDEX(plHardRegionInvert),
    CLASS_INDEX(plVisRegion),
    CLASS_INDEX(plVisMgr),
    CLASS_INDEX(plRegionBase),
    CLASS_INDEX(pfGUIPopUpMenu),
    CLASS_INDEX(pfGUIMenuItem),
    CLASS_INDEX(plCoopCoordinator),
    CLASS_INDEX(plFont),
    CLASS_INDEX(plFontCache),
    CLASS_INDEX(plRelevanceRegion),
    CLASS_INDEX(plRelevanceMgr),
    CLASS_INDEX(pfJournalBook),
    CLASS_INDEX(plLayerTargetContainer),
    CLASS_INDEX(plImageLibMod),
    CLASS_INDEX(plParticleFlockEffect),
    CLASS_INDEX(plParticleSDLMod),
    CLASS_INDEX(plAgeLoader),
    CLASS_INDEX(plWaveSetBase),
    CLASS_INDEX(plPhysicalSndGroup),
    CLASS_INDEX(pfBookData),
    CLASS_INDEX(plDynaTorpedoMgr),
    CLASS_INDEX(plDynaTorpedoVSMgr),
    CLASS_INDEX(plClusterGroup),
    CLASS_INDEX(plGameMarkerModifier),
    CLASS_INDEX(plLODMipmap),
    CLASS_INDEX(plSwimDetector),
    CLASS_INDEX(plFadeOpacityMod),
    CLASS_INDEX(plFadeOpacityLay),
    CLASS_INDEX(plDistOpacityMod),
    CLASS_INDEX(plArmatureModBase),
    CLASS_INDEX(plSwimRegionInterface),
    CLASS_INDEX(plSwimCircularCurrentRegion),
    CLASS_INDEX(plParticleFollowSystemEffect),
    CLASS_INDEX(plSwimStraightCurrentRegion),
    CLASS_INDEX(pfObjectFlocker),
    CLASS_INDEX(plGrassShaderMod),
    CLASS_INDEX(plDynamicCamMap),
    CLASS_INDEX(plRidingAnimatedPhysicalDetector),
    CLASS_INDEX(plVolumeSensorConditionalObjectNoArbitration),
    CLASS_INDEX(plPXSubWorld),
    CLASS_INDEX(pfConfirmationMgr),
//---------------------------------------------------------
// Keyed objects above this line, unkeyed (such as messages) below..
//---------------------------------------------------------

    CLASS_INDEX_NONKEYED_OBJ_START
    CLASS_INDEX(plObjRefMsg),  
    CLASS_INDEX(plNodeRefMsg),
    CLASS_INDEX(plMessage), 
    CLASS_INDEX(plRefMsg),
    CLASS_INDEX(plGenRefMsg),
    CLASS_INDEX(plTimeMsg),
    CLASS_INDEX(plAnimCmdMsg),
    CLASS_INDEX(plParticleUpdateMsg),
    CLASS_INDEX(plLayRefMsg),
    CLASS_INDEX(plMatRefMsg),
    CLASS_INDEX(plCameraMsg),
    CLASS_INDEX(plInputEventMsg),
    CLASS_INDEX(plKeyEventMsg),
    CLASS_INDEX(plMouseEventMsg),
    CLASS_INDEX(plEvalMsg),
    CLASS_INDEX(plTransformMsg),
    CLASS_INDEX(plControlEventMsg),
    CLASS_INDEX(plVaultCCRNode),
    CLASS_INDEX(plLOSRequestMsg),
    CLASS_INDEX(plLOSHitMsg),
    CLASS_INDEX(plSingleModMsg),
    CLASS_INDEX(plMultiModMsg),
    CLASS_INDEX(plAvatarPhysicsEnableCallbackMsg),
    CLASS_INDEX(plMemberUpdateMsg),
    CLASS_INDEX(plNetMsgPagingRoom),
    CLASS_INDEX(plActivatorMsg),
    CLASS_INDEX(plDispatch),
    CLASS_INDEX(plReceiver),
    CLASS_INDEX(plMeshRefMsg),
    CLASS_INDEX(hsGRenderProcs),
    CLASS_INDEX(hsSfxAngleFade),
    CLASS_INDEX(hsSfxDistFade),
    CLASS_INDEX(hsSfxDistShade),
    CLASS_INDEX(hsSfxGlobalShade),
    CLASS_INDEX(hsSfxIntenseAlpha),
    CLASS_INDEX(hsSfxObjDistFade),
    CLASS_INDEX(hsSfxObjDistShade),
    CLASS_INDEX(hsDynamicValue),
    CLASS_INDEX(hsDynamicScalar), 
    CLASS_INDEX(hsDynamicColorRGBA),
    CLASS_INDEX(hsDynamicMatrix33),
    CLASS_INDEX(hsDynamicMatrix44),
    CLASS_INDEX(plOmniSqApplicator),
    CLASS_INDEX(plPreResourceMsg), 
    CLASS_INDEX(UNUSED_hsDynamicColorRGBA),
    CLASS_INDEX(UNUSED_hsDynamicMatrix33),
    CLASS_INDEX(UNUSED_hsDynamicMatrix44),
    CLASS_INDEX(plController),
    CLASS_INDEX(plLeafController),
    CLASS_INDEX(plCompoundController),
    CLASS_INDEX(UNUSED_plRotController),
    CLASS_INDEX(UNUSED_plPosController),
    CLASS_INDEX(UNUSED_plScalarController),
    CLASS_INDEX(UNUSED_plPoint3Controller),
    CLASS_INDEX(UNUSED_plScaleValueController), 
    CLASS_INDEX(UNUSED_plQuatController),
    CLASS_INDEX(UNUSED_plMatrix33Controller),
    CLASS_INDEX(UNUSED_plMatrix44Controller),
    CLASS_INDEX(UNUSED_plEaseController),
    CLASS_INDEX(UNUSED_plSimpleScaleController),
    CLASS_INDEX(UNUSED_plSimpleRotController),
    CLASS_INDEX(plCompoundRotController),
    CLASS_INDEX(UNUSED_plSimplePosController),
    CLASS_INDEX(plCompoundPosController),
    CLASS_INDEX(plTMController),        
    CLASS_INDEX(hsFogControl),
    CLASS_INDEX(plIntRefMsg),
    CLASS_INDEX(plCollisionReactor),
    CLASS_INDEX(plCorrectionMsg),
    CLASS_INDEX(plPhysicalModifier),
    CLASS_INDEX(plPickedMsg),
    CLASS_INDEX(plCollideMsg),
    CLASS_INDEX(plTriggerMsg),
    CLASS_INDEX(plInterestingModMsg),
    CLASS_INDEX(plDebugKeyEventMsg),
    CLASS_INDEX(plPhysicalProperties_DEAD),
    CLASS_INDEX(plSimplePhys),
    CLASS_INDEX(plMatrixUpdateMsg),
    CLASS_INDEX(plCondRefMsg),
    CLASS_INDEX(plTimerCallbackMsg),
    CLASS_INDEX(plEventCallbackMsg),
    CLASS_INDEX(plSpawnModMsg),
    CLASS_INDEX(plSpawnRequestMsg),
    CLASS_INDEX(plLoadCloneMsg),
    CLASS_INDEX(plEnableMsg),
    CLASS_INDEX(plWarpMsg),
    CLASS_INDEX(plAttachMsg),
    CLASS_INDEX(DEAD_pfConsole),
    CLASS_INDEX(plRenderMsg),
    CLASS_INDEX(plAnimTimeConvert),
    CLASS_INDEX(plSoundMsg),
    CLASS_INDEX(plInterestingPing),
    CLASS_INDEX(plNodeCleanupMsg),
    CLASS_INDEX(plSpaceTree),
    CLASS_INDEX(plNetMessage),
    CLASS_INDEX(plNetMsgJoinReq),
    CLASS_INDEX(plNetMsgJoinAck),
    CLASS_INDEX(plNetMsgLeave),
    CLASS_INDEX(plNetMsgPing),
    CLASS_INDEX(plNetMsgRoomsList),
    CLASS_INDEX(plNetMsgGroupOwner),
    CLASS_INDEX(plNetMsgGameStateRequest),
    CLASS_INDEX(plNetMsgSessionReset),
    CLASS_INDEX(plNetMsgOmnibus),
    CLASS_INDEX(plNetMsgObject),
    CLASS_INDEX(plCCRInvisibleMsg),
    CLASS_INDEX(plLinkInDoneMsg),
    CLASS_INDEX(plNetMsgGameMessage),
    CLASS_INDEX(plNetMsgStream),
    CLASS_INDEX(plAudioSysMsg),
    CLASS_INDEX(plDispatchBase),
    CLASS_INDEX(plServerReplyMsg),
    CLASS_INDEX(plDeviceRecreateMsg),
    CLASS_INDEX(plNetMsgStreamHelper),
    CLASS_INDEX(plNetMsgObjectHelper),
    CLASS_INDEX(plIMouseXEventMsg),
    CLASS_INDEX(plIMouseYEventMsg),
    CLASS_INDEX(plIMouseBEventMsg),
    CLASS_INDEX(plLogicTriggerMsg),
    CLASS_INDEX(plPipeline),
    CLASS_INDEX(plDXPipeline),
    CLASS_INDEX(plNetMsgVoice),
    CLASS_INDEX(plLightRefMsg),
    CLASS_INDEX(plNetMsgStreamedObject),
    CLASS_INDEX(plNetMsgSharedState),
    CLASS_INDEX(plNetMsgTestAndSet),
    CLASS_INDEX(plNetMsgGetSharedState),
    CLASS_INDEX(plSharedStateMsg),
    CLASS_INDEX(plNetGenericServerTask),
    CLASS_INDEX(plNetClientMgrMsg),
    CLASS_INDEX(plLoadAgeMsg),
    CLASS_INDEX(plMessageWithCallbacks),
    CLASS_INDEX(plClientMsg),
    CLASS_INDEX(plClientRefMsg),
    CLASS_INDEX(plNetMsgObjStateRequest),
    CLASS_INDEX(plCCRPetitionMsg),
    CLASS_INDEX(plVaultCCRInitializationTask),
    CLASS_INDEX(plNetServerMsg),
    CLASS_INDEX(plNetServerMsgWithContext),
    CLASS_INDEX(plNetServerMsgRegisterServer),
    CLASS_INDEX(plNetServerMsgUnregisterServer),
    CLASS_INDEX(plNetServerMsgStartProcess),
    CLASS_INDEX(plNetServerMsgRegisterProcess),
    CLASS_INDEX(plNetServerMsgUnregisterProcess),
    CLASS_INDEX(plNetServerMsgFindProcess),
    CLASS_INDEX(plNetServerMsgProcessFound),
    CLASS_INDEX(plNetMsgRoutingInfo),
    CLASS_INDEX(UNUSED_plNetServerSessionInfo),
    CLASS_INDEX(plSimulationMsg),
    CLASS_INDEX(plSimulationSynchMsg),
    CLASS_INDEX(plHKSimulationSynchMsg),
    CLASS_INDEX(plAvatarMsg),
    CLASS_INDEX(plAvTaskMsg),
    CLASS_INDEX(plAvSeekMsg),
    CLASS_INDEX(plAvOneShotMsg),
    CLASS_INDEX(plSatisfiedMsg),
    CLASS_INDEX(plNetMsgObjectListHelper),
    CLASS_INDEX(plNetMsgObjectUpdateFilter),
    CLASS_INDEX(plProxyDrawMsg),
    CLASS_INDEX(plSelfDestructMsg),
    CLASS_INDEX(plSimInfluenceMsg ),
    CLASS_INDEX(plForceMsg ),
    CLASS_INDEX(plOffsetForceMsg ),
    CLASS_INDEX(plTorqueMsg ),
    CLASS_INDEX(plImpulseMsg ),
    CLASS_INDEX(plOffsetImpulseMsg ),
    CLASS_INDEX(plAngularImpulseMsg ),
    CLASS_INDEX(plDampMsg ),
    CLASS_INDEX(plShiftMassMsg ),
    CLASS_INDEX(plSimStateMsg ),
    CLASS_INDEX(plFreezeMsg ),
    CLASS_INDEX(plEventGroupMsg ),
    CLASS_INDEX(plSuspendEventMsg ),
    CLASS_INDEX(plNetMsgMembersListReq),
    CLASS_INDEX(plNetMsgMembersList),
    CLASS_INDEX(plNetMsgMemberInfoHelper),
    CLASS_INDEX(plNetMsgMemberListHelper),
    CLASS_INDEX(plNetMsgMemberUpdate),
    CLASS_INDEX(plNetMsgServerToClient),
    CLASS_INDEX(plNetMsgCreatePlayer),
    CLASS_INDEX(plNetMsgAuthenticateHello),
    CLASS_INDEX(plNetMsgAuthenticateChallenge),
    CLASS_INDEX(plConnectedToVaultMsg),
    CLASS_INDEX(plCCRCommunicationMsg),
    CLASS_INDEX(plNetMsgInitialAgeStateSent),
    CLASS_INDEX(plInitialAgeStateLoadedMsg),
    CLASS_INDEX(plNetServerMsgFindServerBase),
    CLASS_INDEX(plNetServerMsgFindServerReplyBase),
    CLASS_INDEX(plNetServerMsgFindAuthServer),
    CLASS_INDEX(plNetServerMsgFindAuthServerReply),
    CLASS_INDEX(plNetServerMsgFindVaultServer),
    CLASS_INDEX(plNetServerMsgFindVaultServerReply),
    CLASS_INDEX(plAvTaskSeekDoneMsg),
    CLASS_INDEX(plResPatcherMsg),
    CLASS_INDEX(plNetServerMsgVaultTask),
    CLASS_INDEX(plNetMsgVaultTask),
    CLASS_INDEX(plAgeLinkStruct),
    CLASS_INDEX(plVaultAgeInfoNode),
    CLASS_INDEX(plNetMsgStreamableHelper),
    CLASS_INDEX(plNetMsgReceiversListHelper),
    CLASS_INDEX(plNetMsgListenListUpdate),
    CLASS_INDEX(plNetServerMsgPing),
    CLASS_INDEX(plNetMsgAlive),
    CLASS_INDEX(plNetMsgTerminated),
    CLASS_INDEX(plSDLModifierMsg),          
    CLASS_INDEX(plNetMsgSDLState),      
    CLASS_INDEX(plNetServerMsgSessionReset),
    CLASS_INDEX(plCCRBanLinkingMsg),
    CLASS_INDEX(plCCRSilencePlayerMsg),
    CLASS_INDEX(plRenderRequestMsg),
    CLASS_INDEX(plRenderRequestAck),
    CLASS_INDEX(plNetMember),
    CLASS_INDEX(plNetGameMember),
    CLASS_INDEX(plNetTransportMember),
    CLASS_INDEX(plConvexVolume),
    CLASS_INDEX(plParticleGenerator),
    CLASS_INDEX(plSimpleParticleGenerator),
    CLASS_INDEX(plParticleEmitter),
    CLASS_INDEX(plAGChannel),
    CLASS_INDEX(plMatrixChannel),
    CLASS_INDEX(plMatrixTimeScale),
    CLASS_INDEX(plMatrixBlend),
    CLASS_INDEX(plMatrixControllerChannel),
    CLASS_INDEX(plQuatPointCombine),
    CLASS_INDEX(plPointChannel),
    CLASS_INDEX(plPointConstant),
    CLASS_INDEX(plPointBlend),
    CLASS_INDEX(plQuatChannel),
    CLASS_INDEX(plQuatConstant),
    CLASS_INDEX(plQuatBlend),
    CLASS_INDEX(plLinkToAgeMsg),
    CLASS_INDEX(plPlayerPageMsg),
    CLASS_INDEX(plCmdIfaceModMsg),
    CLASS_INDEX(plNetServerMsgPlsUpdatePlayer),
    CLASS_INDEX(plListenerMsg),
    CLASS_INDEX(plAnimPath),
    CLASS_INDEX(plClothingUpdateBCMsg),
    CLASS_INDEX(plNotifyMsg),
    CLASS_INDEX(plFakeOutMsg),
    CLASS_INDEX(plCursorChangeMsg),
    CLASS_INDEX(plNodeChangeMsg),
    CLASS_INDEX(UNUSED_plAvEnableMsg),
    CLASS_INDEX(plLinkCallbackMsg),
    CLASS_INDEX(plTransitionMsg),
    CLASS_INDEX(plConsoleMsg),
    CLASS_INDEX(plVolumeIsect),
    CLASS_INDEX(plSphereIsect),
    CLASS_INDEX(plConeIsect),
    CLASS_INDEX(plCylinderIsect),
    CLASS_INDEX(plParallelIsect),
    CLASS_INDEX(plConvexIsect),
    CLASS_INDEX(plComplexIsect),
    CLASS_INDEX(plUnionIsect),
    CLASS_INDEX(plIntersectionIsect),
    CLASS_INDEX(plModulator),
    CLASS_INDEX(UNUSED___plInventoryMsg),
    CLASS_INDEX(plLinkEffectsTriggerMsg),
    CLASS_INDEX(plLinkEffectBCMsg),
    CLASS_INDEX(plResponderEnableMsg),
    CLASS_INDEX(plNetServerMsgHello),
    CLASS_INDEX(plNetServerMsgHelloReply),
    CLASS_INDEX(plNetServerMember),
    CLASS_INDEX(plResponderMsg),
    CLASS_INDEX(plOneShotMsg),
    CLASS_INDEX(plVaultAgeInfoListNode),
    CLASS_INDEX(plNetServerMsgServerRegistered),
    CLASS_INDEX(plPointTimeScale),
    CLASS_INDEX(plPointControllerChannel),
    CLASS_INDEX(plQuatTimeScale),
    CLASS_INDEX(plAGApplicator),
    CLASS_INDEX(plMatrixChannelApplicator),
    CLASS_INDEX(plPointChannelApplicator),
    CLASS_INDEX(plLightDiffuseApplicator),
    CLASS_INDEX(plLightAmbientApplicator),
    CLASS_INDEX(plLightSpecularApplicator),
    CLASS_INDEX(plOmniApplicator),
    CLASS_INDEX(plQuatChannelApplicator),
    CLASS_INDEX(plScalarChannel),
    CLASS_INDEX(plScalarTimeScale),
    CLASS_INDEX(plScalarBlend),
    CLASS_INDEX(plScalarControllerChannel),
    CLASS_INDEX(plScalarChannelApplicator),
    CLASS_INDEX(plSpotInnerApplicator),
    CLASS_INDEX(plSpotOuterApplicator),
    CLASS_INDEX(plNetServerMsgPlsRoutableMsg),
    CLASS_INDEX(_UNUSED_plPuppetBrainMsg),
    CLASS_INDEX(plATCEaseCurve),
    CLASS_INDEX(plConstAccelEaseCurve),
    CLASS_INDEX(plSplineEaseCurve),
    CLASS_INDEX(plVaultAgeInfoInitializationTask),
    CLASS_INDEX(pfGameGUIMsg),
    CLASS_INDEX(plNetServerMsgVaultRequestGameState),
    CLASS_INDEX(plNetServerMsgVaultGameState),
    CLASS_INDEX(plNetServerMsgVaultGameStateSave),
    CLASS_INDEX(plNetServerMsgVaultGameStateSaved),
    CLASS_INDEX(plNetServerMsgVaultGameStateLoad),
    CLASS_INDEX(plNetClientTask),
    CLASS_INDEX(plNetMsgSDLStateBCast),
    CLASS_INDEX(plReplaceGeometryMsg),
    CLASS_INDEX(plNetServerMsgExitProcess),
    CLASS_INDEX(plNetServerMsgSaveGameState),
    CLASS_INDEX(plDniCoordinateInfo),
    CLASS_INDEX(plNetMsgGameMessageDirected),
    CLASS_INDEX(plLinkOutUnloadMsg),
    CLASS_INDEX(plScalarConstant),
    CLASS_INDEX(plMatrixConstant),
    CLASS_INDEX(plAGCmdMsg),
    CLASS_INDEX(plParticleTransferMsg),
    CLASS_INDEX(plParticleKillMsg),
    CLASS_INDEX(plExcludeRegionMsg),
    CLASS_INDEX(plOneTimeParticleGenerator),
    CLASS_INDEX(plParticleApplicator),
    CLASS_INDEX(plParticleLifeMinApplicator),
    CLASS_INDEX(plParticleLifeMaxApplicator),
    CLASS_INDEX(plParticlePPSApplicator),
    CLASS_INDEX(plParticleAngleApplicator),
    CLASS_INDEX(plParticleVelMinApplicator),
    CLASS_INDEX(plParticleVelMaxApplicator),
    CLASS_INDEX(plParticleScaleMinApplicator),
    CLASS_INDEX(plParticleScaleMaxApplicator),
    CLASS_INDEX(plDynamicTextMsg),
    CLASS_INDEX(plCameraTargetFadeMsg),
    CLASS_INDEX(plAgeLoadedMsg),
    CLASS_INDEX(plPointControllerCacheChannel),
    CLASS_INDEX(plScalarControllerCacheChannel),
    CLASS_INDEX(plLinkEffectsTriggerPrepMsg),
    CLASS_INDEX(plLinkEffectPrepBCMsg),
    CLASS_INDEX(plAvatarInputStateMsg),
    CLASS_INDEX(plAgeInfoStruct),
    CLASS_INDEX(plSDLNotificationMsg),
    CLASS_INDEX(plNetClientConnectAgeVaultTask),
    CLASS_INDEX(plLinkingMgrMsg),
    CLASS_INDEX(plVaultNotifyMsg),
    CLASS_INDEX(plPlayerInfo),
    CLASS_INDEX(plSwapSpansRefMsg),
    CLASS_INDEX(pfKI),
    CLASS_INDEX(plDISpansMsg),
    CLASS_INDEX(plNetMsgCreatableHelper),
    CLASS_INDEX(plCreatableUuid),
    CLASS_INDEX(plNetMsgRequestMyVaultPlayerList),
    CLASS_INDEX(plDelayedTransformMsg),
    CLASS_INDEX(plSuperVNodeMgrInitTask),
    CLASS_INDEX(plElementRefMsg),
    CLASS_INDEX(plClothingMsg),
    CLASS_INDEX(plEventGroupEnableMsg),
    CLASS_INDEX(pfGUINotifyMsg),
    CLASS_INDEX(UNUSED_plAvBrain),
    CLASS_INDEX(plArmatureBrain),
    CLASS_INDEX(plAvBrainHuman),
    CLASS_INDEX(plAvBrainCritter),
    CLASS_INDEX(plAvBrainDrive),
    CLASS_INDEX(plAvBrainSample),
    CLASS_INDEX(plAvBrainGeneric),
    CLASS_INDEX(UNUSED_plPreloaderMsg),
    CLASS_INDEX(plAvBrainLadder),
    CLASS_INDEX(plInputIfaceMgrMsg),
    CLASS_INDEX(pfKIMsg),
    CLASS_INDEX(plRemoteAvatarInfoMsg),
    CLASS_INDEX(plMatrixDelayedCorrectionApplicator),
    CLASS_INDEX(plAvPushBrainMsg),
    CLASS_INDEX(plAvPopBrainMsg),
    CLASS_INDEX(plRoomLoadNotifyMsg),
    CLASS_INDEX(plAvTask),
    CLASS_INDEX(plAvAnimTask),
    CLASS_INDEX(plAvSeekTask),
    CLASS_INDEX(plNetCommAuthConnectedMsg),
    CLASS_INDEX(plAvOneShotTask),
    CLASS_INDEX(UNUSED_plAvEnableTask),
    CLASS_INDEX(plAvTaskBrain),
    CLASS_INDEX(plAnimStage),
    CLASS_INDEX(plNetClientMember),
    CLASS_INDEX(plNetClientCommTask),
    CLASS_INDEX(plNetServerMsgAuthRequest),
    CLASS_INDEX(plNetServerMsgAuthReply),
    CLASS_INDEX(plNetClientCommAuthTask),
    CLASS_INDEX(plClientGuid),
    CLASS_INDEX(plNetMsgVaultPlayerList),
    CLASS_INDEX(plNetMsgSetMyActivePlayer),
    CLASS_INDEX(plNetServerMsgRequestAccountPlayerList),
    CLASS_INDEX(plNetServerMsgAccountPlayerList),
    CLASS_INDEX(plNetMsgPlayerCreated),
    CLASS_INDEX(plNetServerMsgVaultCreatePlayer),
    CLASS_INDEX(plNetServerMsgVaultPlayerCreated),
    CLASS_INDEX(plNetMsgFindAge),
    CLASS_INDEX(plNetMsgFindAgeReply),
    CLASS_INDEX(plNetClientConnectPrepTask),
    CLASS_INDEX(plNetClientAuthTask),
    CLASS_INDEX(plNetClientGetPlayerVaultTask),
    CLASS_INDEX(plNetClientSetActivePlayerTask),
    CLASS_INDEX(plNetClientFindAgeTask),
    CLASS_INDEX(plNetClientLeaveTask),
    CLASS_INDEX(plNetClientJoinTask),
    CLASS_INDEX(plNetClientCalibrateTask),
    CLASS_INDEX(plNetMsgDeletePlayer),
    CLASS_INDEX(plNetServerMsgVaultDeletePlayer),
    CLASS_INDEX(UNUSED_plNetCoreStatsSummary),
    CLASS_INDEX(plCreatableGenericValue),
    CLASS_INDEX(plCreatableListHelper),
    CLASS_INDEX(plCreatableStream),
    CLASS_INDEX(plAvBrainGenericMsg),
    CLASS_INDEX(plAvTaskSeek),
    CLASS_INDEX(plAGInstanceCallbackMsg),
    CLASS_INDEX(plArmatureEffectMsg),
    CLASS_INDEX(plArmatureEffectStateMsg),
    CLASS_INDEX(plShadowCastMsg),
    CLASS_INDEX(plBoundsIsect),
    CLASS_INDEX(plResMgrHelperMsg),
    CLASS_INDEX(plNetCommAuthMsg),
    CLASS_INDEX(plNetCommFileListMsg),
    CLASS_INDEX(UNUSED_plNetCommFileDownloadMsg),
    CLASS_INDEX(plNetCommLinkToAgeMsg),
    CLASS_INDEX(plNetCommPlayerListMsg),
    CLASS_INDEX(plNetCommActivePlayerMsg),
    CLASS_INDEX(plNetCommCreatePlayerMsg),
    CLASS_INDEX(plNetCommDeletePlayerMsg),
    CLASS_INDEX(plNetCommPublicAgeListMsg),
    CLASS_INDEX(plNetCommPublicAgeMsg),
    CLASS_INDEX(plNetCommRegisterAgeMsg),
    CLASS_INDEX(plVaultAdminInitializationTask),
    CLASS_INDEX(plMultistageModMsg),
    CLASS_INDEX(plSoundVolumeApplicator),
    CLASS_INDEX(plCutter),
    CLASS_INDEX(plBulletMsg),
    CLASS_INDEX(plDynaDecalEnableMsg),
    CLASS_INDEX(plOmniCutoffApplicator),
    CLASS_INDEX(plArmatureUpdateMsg),
    CLASS_INDEX(plAvatarFootMsg),
    CLASS_INDEX(plNetOwnershipMsg),
    CLASS_INDEX(plNetMsgRelevanceRegions),
    CLASS_INDEX(plParticleFlockMsg),
    CLASS_INDEX(plAvatarBehaviorNotifyMsg),
    CLASS_INDEX(plATCChannel),
    CLASS_INDEX(plScalarSDLChannel),
    CLASS_INDEX(plLoadAvatarMsg),
    CLASS_INDEX(plAvatarSetTypeMsg),
    CLASS_INDEX(plNetMsgLoadClone),
    CLASS_INDEX(plNetMsgPlayerPage),
    CLASS_INDEX(plVNodeInitTask),
    CLASS_INDEX(plRippleShapeMsg),
    CLASS_INDEX(plEventManager),
    CLASS_INDEX(plVaultNeighborhoodInitializationTask),
    CLASS_INDEX(plNetServerMsgAgentRecoveryRequest),
    CLASS_INDEX(plNetServerMsgFrontendRecoveryRequest),
    CLASS_INDEX(plNetServerMsgBackendRecoveryRequest),
    CLASS_INDEX(plNetServerMsgAgentRecoveryData),
    CLASS_INDEX(plNetServerMsgFrontendRecoveryData),
    CLASS_INDEX(plNetServerMsgBackendRecoveryData),
    CLASS_INDEX(plSubWorldMsg),
    CLASS_INDEX(plMatrixDifferenceApp),
    CLASS_INDEX(plAvatarSpawnNotifyMsg),
    // ** NOTE **: DO NOT INSERT CLASS_INDEXES HERE. Ignore all this junk
    //  and continue adding them at the bottom of the enum. - EAp
    // -- Reserve a block of class indexes for auto-generated server database structs --
    CLASS_INDEX_DATABASE_STRUCT_INDEXES_START
    CLASS_INDEX_DATABASE_STRUCT_INDEXES_END
    CLASS_INDEX(plVaultGameServerInitializationTask),
    CLASS_INDEX(plNetClientFindDefaultAgeTask),
    CLASS_INDEX(plVaultAgeNode),
    CLASS_INDEX(plVaultAgeInitializationTask),
    CLASS_INDEX(plSetListenerMsg),
    CLASS_INDEX(plVaultSystemNode),
    CLASS_INDEX(plAvBrainSwim),
    CLASS_INDEX(plNetMsgVault),
    CLASS_INDEX(plNetServerMsgVault),
    CLASS_INDEX(plVaultTask),           // =1066
    CLASS_INDEX(plVaultConnectTask),
    CLASS_INDEX(plVaultNegotiateManifestTask),
    CLASS_INDEX(plVaultFetchNodesTask),
    CLASS_INDEX(plVaultSaveNodeTask),
    CLASS_INDEX(plVaultFindNodeTask),
    CLASS_INDEX(plVaultAddNodeRefTask),
    CLASS_INDEX(plVaultRemoveNodeRefTask),
    CLASS_INDEX(plVaultSendNodeTask),
    CLASS_INDEX(plVaultNotifyOperationCallbackTask),
    CLASS_INDEX(plVNodeMgrInitializationTask),
    CLASS_INDEX(plVaultPlayerInitializationTask),
    CLASS_INDEX(plNetVaultServerInitializationTask),
    CLASS_INDEX(plCommonNeighborhoodsInitTask),
    CLASS_INDEX(plVaultNodeRef),
    CLASS_INDEX(plVaultNode),
    CLASS_INDEX(plVaultFolderNode),
    CLASS_INDEX(plVaultImageNode),
    CLASS_INDEX(plVaultTextNoteNode),
    CLASS_INDEX(plVaultSDLNode),
    CLASS_INDEX(plVaultAgeLinkNode),
    CLASS_INDEX(plVaultChronicleNode),
    CLASS_INDEX(plVaultPlayerInfoNode),
    CLASS_INDEX(plVaultMgrNode),
    CLASS_INDEX(plVaultPlayerNode),
    CLASS_INDEX(plSynchEnableMsg),
    CLASS_INDEX(plNetVaultServerNode),
    CLASS_INDEX(plVaultAdminNode),
    CLASS_INDEX(plVaultGameServerNode),
    CLASS_INDEX(plVaultPlayerInfoListNode),
    CLASS_INDEX(plAvatarStealthModeMsg),
    CLASS_INDEX(plEventCallbackInterceptMsg),
    CLASS_INDEX(plDynamicEnvMapMsg),
    CLASS_INDEX(plClimbMsg),
    CLASS_INDEX(plIfaceFadeAvatarMsg),
    CLASS_INDEX(plAvBrainClimb),
    CLASS_INDEX(plSharedMeshBCMsg),
    CLASS_INDEX(plNetVoiceListMsg),
    CLASS_INDEX(plSwimMsg),
    CLASS_INDEX(plMorphDelta),
    CLASS_INDEX(plMatrixControllerCacheChannel),
    CLASS_INDEX(plVaultMarkerNode),
    CLASS_INDEX(pfMarkerMsg),
    CLASS_INDEX(plPipeResMakeMsg),
    CLASS_INDEX(plPipeRTMakeMsg),
    CLASS_INDEX(plPipeGeoMakeMsg),
    CLASS_INDEX(plAvCoopMsg),
    CLASS_INDEX(plAvBrainCoop),
    CLASS_INDEX(plSimSuppressMsg),
    CLASS_INDEX(plVaultMarkerListNode),
    CLASS_INDEX(UNUSED_plAvTaskOrient),
    CLASS_INDEX(plAgeBeginLoadingMsg),
    CLASS_INDEX(plSetNetGroupIDMsg),
    CLASS_INDEX(pfBackdoorMsg),
    CLASS_INDEX(plAIMsg),
    CLASS_INDEX(plAIBrainCreatedMsg),
    CLASS_INDEX(plStateDataRecord),
    CLASS_INDEX(plNetClientCommDeletePlayerTask),
    CLASS_INDEX(plNetMsgSetTimeout),
    CLASS_INDEX(plNetMsgActivePlayerSet),
    CLASS_INDEX(plNetClientCommSetTimeoutTask),
    CLASS_INDEX(plNetRoutableMsgOmnibus),
    CLASS_INDEX(plNetMsgGetPublicAgeList),
    CLASS_INDEX(plNetMsgPublicAgeList),
    CLASS_INDEX(plNetMsgCreatePublicAge),
    CLASS_INDEX(plNetMsgPublicAgeCreated),
    CLASS_INDEX(plNetServerMsgEnvelope),
    CLASS_INDEX(plNetClientCommGetPublicAgeListTask),
    CLASS_INDEX(plNetClientCommCreatePublicAgeTask),
    CLASS_INDEX(plNetServerMsgPendingMsgs),
    CLASS_INDEX(plNetServerMsgRequestPendingMsgs),
    CLASS_INDEX(plDbInterface),
    CLASS_INDEX(plDbProxyInterface),
    CLASS_INDEX(plDBGenericSQLDB),
    CLASS_INDEX(pfGameMgrMsg),
    CLASS_INDEX(pfGameCliMsg),
    CLASS_INDEX(pfGameCli),
    CLASS_INDEX(pfGmTicTacToe),
    CLASS_INDEX(pfGmHeek),
    CLASS_INDEX(pfGmMarker),
    CLASS_INDEX(pfGmBlueSpiral),
    CLASS_INDEX(pfGmClimbingWall),
    CLASS_INDEX(plAIArrivedAtGoalMsg),
    CLASS_INDEX(pfGmVarSync),
    CLASS_INDEX(plNetMsgRemovePublicAge),
    CLASS_INDEX(plNetMsgPublicAgeRemoved),
    CLASS_INDEX(plNetClientCommRemovePublicAgeTask),
    CLASS_INDEX(plCCRMessage),
    CLASS_INDEX(plAvOneShotLinkTask),
    CLASS_INDEX(plNetAuthDatabase),
    CLASS_INDEX(plAvatarOpacityCallbackMsg),
    CLASS_INDEX(plAGDetachCallbackMsg),
    CLASS_INDEX(pfMovieEventMsg),
    CLASS_INDEX(plMovieMsg),
    CLASS_INDEX(plPipeTexMakeMsg),
    CLASS_INDEX(plEventLog),
    CLASS_INDEX(plDbEventLog),
    CLASS_INDEX(plSyslogEventLog),
    CLASS_INDEX(plCaptureRenderMsg),
    CLASS_INDEX(plAgeLoaded2Msg),
    CLASS_INDEX(plPseudoLinkEffectMsg),
    CLASS_INDEX(plPseudoLinkAnimTriggerMsg),
    CLASS_INDEX(plPseudoLinkAnimCallbackMsg),
    CLASS_INDEX(__UNUSED__pfClimbingWallMsg),
    CLASS_INDEX(plClimbEventMsg),
    CLASS_INDEX(__UNUSED__plAvBrainQuab),
    CLASS_INDEX(plAccountUpdateMsg),
    CLASS_INDEX(plLinearVelocityMsg),
    CLASS_INDEX(plAngularVelocityMsg),
    CLASS_INDEX(plRideAnimatedPhysMsg),
    CLASS_INDEX(plAvBrainRideAnimatedPhysical),
    CLASS_INDEX(pfGameScoreMsg),
    CLASS_INDEX(pfGameScoreListMsg),
    CLASS_INDEX(pfGameScoreTransferMsg),
    CLASS_INDEX(pfGameScoreUpdateMsg),
    CLASS_INDEX(plLoadClothingMsg),
    CLASS_INDEX(pl3DPipeline),
    CLASS_INDEX(plGLPipeline),
    CLASS_INDEX(plSDLModifierStateMsg),
    CLASS_INDEX(plConfirmationMsg),
    CLASS_INDEX(plLocalizedConfirmationMsg),
CLASS_INDEX_LIST_END

#endif // plCreatableIndex_inc
