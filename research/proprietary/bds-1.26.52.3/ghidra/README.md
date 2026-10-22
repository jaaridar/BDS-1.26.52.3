# Headless Ghidra recovery — official BDS binary

> Proprietary research evidence, mechanically derived from the Mojang
> `bedrock_server` binary. Not MIT-licensed OpenBDS source. The target was
> never executed: this is a static import plus decompiler pass.

- mode: `worldgen`
- RTTI `type_info` objects recovered: `10094`
- distinct classes/vtables recovered: `6104` / `6508`
- vtables selected by name filter: `787`
- selected vtable slots: `7661`
- functions analysed: `1200`
- functions decompiled: `1200`

## How the class names were recovered

The binary has no symbol table. Itanium ABI `type_info` objects were
located structurally: a pointer to a data-section vtable followed by a
pointer to an ASCII mangled type name in `.rodata`. Vtables were then
found as relocated pointers equal to those `type_info` addresses, so the
inventory in `VTABLE-CLASSES.tsv` covers every polymorphic class in the
binary rather than a hand-written guess list.

## Files

- `VTABLE-CLASSES.tsv` — every recovered class/vtable
- `vtable-slots.tsv` — slot-to-function map for selected classes
- `functions.tsv` — analysis + string attribution per function
- `callgraph.tsv` — recovered direct call edges
- `pseudocode/pseudocode-*.md` — Ghidra C output
- `pseudocode-index.md` — index into the parts

## Priority classes (expanded by call-graph BFS)

- BiomeTagComponent
- BiomeColorSampling::WhiteMapPolicy
- BiomeColorSampling::BiomeAndPatternMapPolicy
- ServerLevelRandom
- LevelRandom
- VoidGenerator
- BlockRandomTickingComponent
- RandomizableBlockActorContainerBase
- TerrainBurstReactionComponent
- RandomizableContainerBlockActorComponent
- RandomizableBlockActorFillingContainer
- RandomizableBlockActorContainer
- LootItemBiomeHasTagCondition
- LootItemRandomChanceCondition
- LootItemRandomChanceWithLootingCondition
- LootItemRandomChanceWithSpecialModifierCondition
- LootItemRandomDifficultyChanceCondition
- EnchantRandomEquipmentFunction
- EnchantRandomlyFunction
- RandomDyeFunction
- RandomBlockStateFunction
- InMemoryRandomAccessFile
- br::worldgen::processors::BlockRules::RandomBlockMatch
- br::worldgen::processors::BlockRules::RandomBlockStateMatch
- br::worldgen::WorldGenRandom
- SurfaceLevelCache
- StructurePoolBlockPredicateBlockMatchRandom
- StructurePoolBlockPredicateCappedRandomBlockReplacement
- NoiseUtils::DoublesForFloatsRandom
- std::__1::__function::__func<?, StructurePoolBlockPredicateCappedRandomBlockReplacement::finalize, ?&, ?, ?, long, ?, char, ?, std::ostream, ?, ?, char, long double, ?&, ?, ?&, ?, double, ?, unsigned long>::$_0::S_::allocator<S7, ?>::?::void::?&::?::long::?::char::?::?*::short
- std::__1::__shared_ptr_emplace<PoolAliasBindingInternal::RandomPoolAliasBinding, S_::allocator<S2, ?>>
- PoolAliasBindingInternal::RandomPoolAliasBinding
- std::__1::__shared_ptr_emplace<PoolAliasBindingInternal::RandomGroupPoolAliasBinding, S_::allocator<S2, ?>>
- PoolAliasBindingInternal::RandomGroupPoolAliasBinding
- FlatWorldGenerator
- RandomSpreadTreeCanopy
- std::__1::__function::__func<?, ColumnUtils::scanColumnWithinPosBiome, ?&, ?, ?, ?, long, ?, char, ?, ?, ?, ?, long, double, ?, long double, ?, ?, ?*, ? const&, ?, long, ?, char, ?, ?*, short, int, unsigned char, S_::function<?, bool, S7, ?> const&>::SC::?
- ScanSurfaceFeature
- SnapToSurfaceFeature
- SurfaceRelativeThresholdFeature
- WeightedRandomFeature
- BiomeDecorationAttributes<?, ?, ?, unsigned long, ?, long, int, char, int, unsigned short, ?, long double, ?, unsigned short, ?, ?, long double, short>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_50::ImpactDamageSubcomponentDefinition::DifficultyRandomization, void>
- cereal::internal::TypeSchema<SharedTypes::v1_26_50::ImpactDamageSubcomponentDefinition::DifficultyRandomization>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_50::DimensionDefinition::DefaultBiome, void>
- cereal::internal::TypeSchema<std::__1::optional<SharedTypes::v1_26_50::DimensionDefinition::DefaultBiome>>
- cereal::internal::TypeSchema<SharedTypes::v1_26_50::DimensionDefinition::DefaultBiome>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_30::SurfaceBuilder::NoiseGradientSurfaceSettings, void>
- cereal::internal::TypeSchema<std::__1::vector<SharedTypes::v1_26_30::NoiseBlockSpecifier, S2::?::allocator<S6, ?>>>
- std::__1::__function::__func<?, ? const::char::long double::?::long double::?::long::internal::TypeSchema<S_::vector<SharedTypes::v1_26_30::NoiseBlockSpecifier, S_::allocator<S8, ?>>>::doMap, entt::meta_any&, SF, ?, S2::?::MetaVisitor&>::?::long::void
- cereal::internal::TypeSchema<SharedTypes::v1_26_30::NoiseBlockSpecifier>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_30::BiomeComponents, void>
- cereal::internal::TypeSchema<SharedTypes::v1_26_30::BiomeComponents>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_30::NoiseBlockSpecifier, void>
- cereal::internal::TypeSchema<SharedTypes::v1_26_30::SurfaceBuilder::NoiseGradientSurfaceSettings>
- cereal::internal::TypeSchema<SharedTypes::v1_21_100::SurfaceBuilder::OverworldSurfaceSettings>
- cereal::internal::TypeSchema<SharedTypes::v1_21_100::SurfaceBuilder::FrozenOceanSurfaceSettings>
- cereal::internal::TypeSchema<SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings>
- cereal::internal::TypeSchema<SharedTypes::v1_21_100::SurfaceBuilder::SwampSurfaceSettings>
- cereal::internal::TypeSchema<SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings>
- cereal::internal::TypeSchema<SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_30::RandomLookAroundGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_30::RandomSwimmingGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_30::WitherRandomAttackPosGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_30::RandomBreachingGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_30::RandomFlyingGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_30::RandomLookAroundAndSitGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_20::BlockDefinition::RandomOffsetComponent::RangeAndSteps, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_20::BlockDefinition::RandomOffsetComponent, void>
- cereal::internal::TypeSchema<SharedTypes::v1_26_20::BlockDefinition::RandomOffsetComponent::RangeAndSteps>
- cereal::internal::TypeSchema<SharedTypes::v1_26_30::RandomBreachingGoalDefinition>
- cereal::internal::TypeSchema<SharedTypes::v1_26_30::RandomFlyingGoalDefinition>
- cereal::internal::TypeSchema<SharedTypes::v1_26_30::RandomLookAroundAndSitGoalDefinition>
- cereal::internal::TypeSchema<SharedTypes::v1_26_30::RandomLookAroundGoalDefinition>
- cereal::internal::TypeSchema<SharedTypes::v1_26_30::RandomSwimmingGoalDefinition>
- cereal::internal::TypeSchema<SharedTypes::v1_26_30::WitherRandomAttackPosGoalDefinition>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_20::BlockDefinition::DeprecatedRandomTickingComponent, void>
- SharedTypes::v1_26_20::BlockDefinition::NoRandomOffsetIfUnitBlockConstraint
- SharedTypes::v1_26_20::BlockDefinition::RandomOffsetInBoundConstraint
- cereal::AllOfConstraint<?, SharedTypes::v1_26_20::BlockDefinition::RandomOffsetInBoundConstraint, S3::?::NoRandomOffsetIfUnitBlockConstraint, S3::?::NoCollisionSnowLogConstraint, S_::ComponentStorageConstraint>
- cereal::internal::TypeSchema<SharedTypes::v1_26_20::BlockDefinition::RandomOffsetComponent>
- cereal::internal::TypeSchema<SharedTypes::v1_26_20::BlockDefinition::DeprecatedRandomTickingComponent>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_20::MoveToRandomBlockGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_20::RandomHoverGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_20::RandomSitGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_20::RandomStrollGoalDefinition, void>
- cereal::internal::TypeSchema<SharedTypes::v1_26_20::MoveToRandomBlockGoalDefinition>
- cereal::internal::TypeSchema<SharedTypes::v1_26_20::RandomHoverGoalDefinition>
- cereal::internal::TypeSchema<SharedTypes::v1_26_20::RandomSitGoalDefinition>
- cereal::internal::TypeSchema<SharedTypes::v1_26_20::RandomStrollGoalDefinition>
- cereal::internal::CompositeSchema<SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition, void>
- SharedTypes::v1_26_0::BiomeReplacementConstraint
- cereal::internal::CompositeSchema<SharedTypes::v1_26_0::BiomeComponents, void>
- cereal::internal::TypeSchema<SharedTypes::v1_26_0::BiomeComponents>
- cereal::internal::TypeSchema<SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition>
- SharedTypes::v1_21_80::BiomeReplacementConstraint
- cereal::internal::CompositeSchema<SharedTypes::v1_21_60::Spawn::BiomeConditions, void>
- cereal::internal::TypeSchema<std::__1::vector<SharedTypes::v1_21_60::Spawn::BiomeConditions, S2::?::allocator<S7, ?>>>
- std::__1::__function::__func<?, ? const::char::long double::?::long double::?::long::internal::TypeSchema<S_::vector<SharedTypes::v1_21_60::Spawn::BiomeConditions, S_::allocator<S9, ?>>>::doMap, entt::meta_any&, SG, ?, S2::?::MetaVisitor&>::?::long::void
- cereal::internal::TypeSchema<SharedTypes::v1_21_60::Spawn::BiomeConditions>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_70::ClientBiomeFoliageColorMap, void>
- cereal::internal::TypeSchema<SharedTypes::v1_21_70::ClientBiomeFoliageColorMap>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_40::ClientBiomeFoliageColorMap, void>
- cereal::internal::TypeSchema<SharedTypes::v1_21_40::ClientBiomeFoliageColorMap>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_40::ClientBiomeGrassColorMap, void>
- cereal::internal::TypeSchema<SharedTypes::v1_21_40::ClientBiomeGrassColorMap>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockStateMatch, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_20::WeightedRandomItem<S2::?::Reference<S2::?::AssetType, ?>>>::void
- cereal::internal::CompositeSchema<SharedTypes::v1_21_20::PoolAliases::Random, void>
- cereal::internal::TypeSchema<std::__1::vector<SharedTypes::v1_21_20::WeightedRandomItem<S4::?::Reference<S4::?::AssetType, ?>>>::S2::?::allocator<SA, ?>>
- std::__1::__function::__func<?, ? const::char::long double::?::long double::?::long::internal::TypeSchema<S_::vector<SharedTypes::v1_21_20::WeightedRandomItem<S6::?::Reference<S6::?::AssetType, ?>>>::S_::allocator<SC, ?>>, ?, double, ?, ?, ?, ?>::entt::meta_any&::SJ::?::S2::?::MetaVisitor&
- cereal::internal::TypeSchema<SharedTypes::v1_21_20::WeightedRandomItem<S2::?::Reference<S2::?::AssetType, ?>>>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_20::WeightedRandomItem<std::__1::vector<S5::?::variant<?, S3::?::PoolAliases::Direct, S8::?::Random>>::S5::?::allocator<SB, ?>>>::void
- cereal::internal::TypeSchema<std::__1::vector<S2::?::variant<?, SharedTypes::v1_21_20::PoolAliases::Direct, S7::?::Random>>::S2::?::allocator<SA, ?>>
- std::__1::__function::__func<?, ? const::char::long double::?::long double::?::long::internal::TypeSchema<S_::vector<S_::variant<?, SharedTypes::v1_21_20::PoolAliases::Direct, S9::?::Random>>::S_::allocator<SC, ?>>, ?, double, ?, ?, ?, ?>::entt::meta_any&::SJ::?::S2::?::MetaVisitor&
- cereal::internal::TypeSchema<std::__1::variant<?, SharedTypes::v1_21_20::PoolAliases::Direct, S6::?::Random>>
- cereal::internal::TypeSchema<SharedTypes::v1_21_20::PoolAliases::Random>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_20::PoolAliases::RandomGroup, void>
- cereal::internal::TypeSchema<std::__1::vector<SharedTypes::v1_21_20::WeightedRandomItem<S3::?::?::S2::?::variant<?, S5::?::PoolAliases::Direct, S8::?::Random>, S2::?::allocator<SB, ?>>>, SC::?::?::SF::?>
- cereal::internal::TypeSchema<SharedTypes::v1_21_20::WeightedRandomItem<std::__1::vector<S5::?::variant<?, S3::?::PoolAliases::Direct, S8::?::Random>>::S5::?::allocator<SB, ?>>>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_20::JigsawStructureDefinition::TerrainAdaptation, void>
- cereal::internal::TypeSchema<SharedTypes::v1_21_20::JigsawStructureDefinition::TerrainAdaptation>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_20::JigsawStructureDefinition::HeightmapProjection, void>
- cereal::internal::TypeSchema<SharedTypes::v1_21_20::JigsawStructureDefinition::HeightmapProjection>
- cereal::internal::TypeSchema<std::__1::vector<S2::?::variant<?, SharedTypes::v1_21_20::PoolAliases::Direct, S7::?::Random, S7::?::RandomGroup>>::S2::?::allocator<SB, ?>>
- std::__1::__function::__func<?, ? const::char::long double::?::long double::?::long::internal::TypeSchema<S_::vector<S_::variant<?, SharedTypes::v1_21_20::PoolAliases::Direct, S9::?::Random, S9::?::RandomGroup>>::S_::allocator<SD, ?>>, ?, double, ?, ?, ?, ?>::entt::meta_any&::SK::?::S2::?::MetaVisitor&
- cereal::internal::TypeSchema<std::__1::variant<?, SharedTypes::v1_21_20::PoolAliases::Direct, S6::?::Random, S6::?::RandomGroup>>
- cereal::internal::TypeSchema<SharedTypes::v1_21_20::PoolAliases::RandomGroup>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_20::JigsawStructureSet::RandomSpreadPlacement, void>
- cereal::internal::TypeSchema<SharedTypes::v1_21_20::JigsawStructureSet::RandomSpreadPlacement>
- cereal::internal::CompositeSchema<std::__1::variant<?, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AlwaysTrueBlock, S7::?::BlockMatch, S7::?::RandomBlockMatch, S7::?::TagMatch, S7::?::BlockStateMatch, S7::?::RandomBlockStateMatch>>::void
- cereal::internal::TypeSchema<std::__1::variant<?, SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AlwaysTrueBlock, S7::?::BlockMatch, S7::?::RandomBlockMatch, S7::?::TagMatch, S7::?::BlockStateMatch, S7::?::RandomBlockStateMatch>>
- cereal::internal::TypeSchema<SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockMatch>
- cereal::internal::TypeSchema<SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::RandomBlockStateMatch>
- cereal::internal::TypeSchema<SharedTypes::v1_21_110::BiomeComponents>
- cereal::internal::TypeSchema<SharedTypes::v1_21_110::SlimeRandomDirectionGoalDefinition>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_110::SlimeRandomDirectionGoalDefinition, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_110::BiomeComponents, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_100::SurfaceBuilder::SwampSurfaceSettings, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_100::SurfaceBuilder::FrozenOceanSurfaceSettings, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_21_100::SurfaceBuilder::OverworldSurfaceSettings, void>
- cereal::internal::CompositeSchema<SharedTypes::v1_20_80::ParticleEventRandomNode, void>
- cereal::internal::TypeSchema<std::__1::optional<S2::?::vector<SharedTypes::v1_20_80::ParticleEventRandomNode, S2::?::allocator<S7, ?>>>>
- cereal::internal::TypeSchema<std::__1::vector<SharedTypes::v1_20_80::ParticleEventRandomNode, S2::?::allocator<S6, ?>>>
- std::__1::__function::__func<?, ? const::char::long double::?::long double::?::long::internal::TypeSchema<S_::vector<SharedTypes::v1_20_80::ParticleEventRandomNode, S_::allocator<S8, ?>>>::doMap, entt::meta_any&, SF, ?, S2::?::MetaVisitor&>::?::long::void
- cereal::internal::TypeSchema<SharedTypes::v1_20_80::ParticleEventRandomNode>
- cereal::internal::CompositeSchema<SharedTypes::Legacy::Spawn::SpawnOnSurface, void>
- cereal::internal::CompositeSchema<SharedTypes::Legacy::Spawn::DensityLimit, void>
- cereal::internal::CompositeSchema<SharedTypes::Legacy::Spawn::BiomeConditions, void>
- cereal::internal::TypeSchema<std::__1::optional<SharedTypes::Legacy::Spawn::DensityLimit>>
- cereal::internal::TypeSchema<SharedTypes::Legacy::Spawn::DensityLimit>
- cereal::internal::TypeSchema<std::__1::optional<SharedTypes::Legacy::Spawn::SpawnOnSurface>>
- cereal::internal::TypeSchema<SharedTypes::Legacy::Spawn::SpawnOnSurface>
- cereal::internal::TypeSchema<std::__1::vector<SharedTypes::Legacy::Spawn::BiomeConditions, S2::?::allocator<S7, ?>>>
- std::__1::__function::__func<?, ? const::char::long double::?::long double::?::long::internal::TypeSchema<S_::vector<SharedTypes::Legacy::Spawn::BiomeConditions, S_::allocator<S9, ?>>>::doMap, entt::meta_any&, SG, ?, S2::?::MetaVisitor&>::?::long::void
- cereal::internal::TypeSchema<SharedTypes::Legacy::Spawn::BiomeConditions>
- cereal::internal::CompositeSchema<SharedTypes::Beta::BiomeComponents, void>
- cereal::internal::TypeSchema<SharedTypes::Beta::BiomeComponents>
- Core::Random
- Crypto::Random::Random
- Crypto::Random::OpenSSLRandomInterface

## Diagnostics

- none
