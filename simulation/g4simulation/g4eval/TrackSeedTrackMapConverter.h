
#ifndef TRACKSEEDTRACKMAPCONVERTER_H
#define TRACKSEEDTRACKMAPCONVERTER_H

#include <fun4all/SubsysReco.h>

#include <string>

class PHCompositeNode;
class SvtxTrackMap;
class TrackSeedContainer;

class TrackSeedTrackMapConverter : public SubsysReco
{
 public:

  TrackSeedTrackMapConverter(const std::string &name = "TrackSeedTrackMapConverter");

  virtual ~TrackSeedTrackMapConverter();

  int InitRun(PHCompositeNode *topNode) override;
  int process_event(PHCompositeNode *topNode) override;
  int End(PHCompositeNode *topNode) override;


 private:

  int getNodes(PHCompositeNode *topNode);

  std::string m_trackMapName = "SvtxTrackMap";
  std::string m_trackSeedName = "TrackSeedContainer";

  SvtxTrackMap *m_trackMap = nullptr;
  TrackSeedContainer *m_seedContainer = nullptr;
};

#endif // TRACKSEEDTRACKMAPCONVERTER_H
